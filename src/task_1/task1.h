#pragma once

#include <memory>

//template<typename T>
//class WeakPtr {
//private:
//    friend std::shared_ptr<T>;
////    struct weak_count{
////        size_t n = 0;
////    };
//    size_t* weak_count_;
//
//
//
//public:
//    WeakPtr() : weak_count_(new WeakReference) {}
//
//    WeakPtr(const WeakPtr<T>& ptr)
//    {
//        ref_ = ptr.ref_;
//    }
//
//    WeakPtr(const std::shared_ptr<T>& ptr) : ref_(new WeakReference)
//    {
//        ref_->shared_ptr_count_ = ptr.use_count();
//        ref_->ptr_ = ptr.get;
//    }
//
//    explicit operator std::shared_ptr<T>()
//    {
//
//    }
//
//    std::shared_ptr<T> lock()
//    {
//        if (ref_->shared_ptr_count_ == 0)
//        {
//            return std::shared_ptr<T>();
//        }
//        else{
//            ref_->shared_ptr_count_
//        }
//    }
//
//    ~WeakPtr()
//    {
//        if (weak_count_ <= 1)
//        {
//            delete ptr;
//        }
//    }
//
//};

//template<typename T>
//class WeakPtr {
//private:
//    struct Reference {
//        size_t n = 0;
//        T* ptr = nullptr;
//
//        Reference() : n(1), ptr(new T) {}
//    };
//
//    Reference* ref_;
//
//public:
//    WeakPtr() : ref_(new Reference) {}
//
//    WeakPtr(const WeakPtr<T>& ptr)
//    {
//        ptr.ref_->n++;
//        ref_ = ptr.ref_;
//    }
//
//    WeakPtr(const std::shared_ptr<T>& ptr)
//    {
//
//    }
//
//};



