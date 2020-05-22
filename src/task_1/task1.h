#pragma once

#include <memory>

template<typename T>
class WeakPtr;

template<typename T>
class SharedPtr
{
private:
    friend WeakPtr<T>;
    size_t* count_;
    T* ptr_ = nullptr;

public:
    SharedPtr()
    {
        count_ = new size_t{0};
    }

    SharedPtr(T* ptr) : ptr_(ptr)
    {
        count_ = new size_t{1};
    }

    SharedPtr(const SharedPtr& ptr)
    {
        count_ = ptr.count_;
        ++(*count_);
        ptr_ = ptr.ptr_;
    }

    SharedPtr(WeakPtr<T>& ptr)
    {
        ++(*(ptr.shared_count_));
        count_ = ptr.shared_count_;
        ptr_ = ptr.ptr_;
        *(ptr.weak_count_) = 2;
    }

    size_t use_count()
    {
        return *count_;
    }

    ~SharedPtr()
    {
        if (*count_ <= 1)
        {
            delete count_;
            if (ptr_ != nullptr) delete ptr_;
        }
        else{
            --(*count_);
        }
    }
};


template<typename T>
class WeakPtr {
private:
    friend SharedPtr<T>;
    size_t* shared_count_;
    size_t* weak_count_;
    T* ptr_ = nullptr;

public:
    WeakPtr()
    {
        shared_count_ = new size_t{0};
        weak_count_ = new size_t{0};
    }

    WeakPtr(T* ptr) : ptr_(ptr)
    {
        shared_count_ = new size_t{0};
        weak_count_ = new size_t{1};
    }

    WeakPtr(const WeakPtr& ptr)
    {
        shared_count_ = ptr.shared_count_;
        weak_count_ = ptr.weak_count_;
        ptr_ = ptr.ptr_;
    };

    WeakPtr(const SharedPtr<T>& ptr)
    {
        shared_count_ = ptr.count_;
        weak_count_ = new size_t{2};
        ptr_ = ptr.ptr_;
    }

    SharedPtr<T> lock()
    {
        if (*weak_count_ == 0) // ptr_->nullptr
        {
            SharedPtr<T>();
        }
        else{
            return SharedPtr(*this);
        }
    }

    ~WeakPtr()
    {
        if (*weak_count_ <= 1)
        {
            delete shared_count_;
            delete weak_count_;
            if (ptr_!=nullptr) delete ptr_;
        }
        else if (*shared_count_ = 0)
        {
            delete shared_count_;
            delete weak_count_;
            if (ptr_!=nullptr) delete ptr_;
        }
    }
};
