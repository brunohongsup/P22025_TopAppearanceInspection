#ifndef __WRAPPER_INTERNAL_LEGACY_OPEN_EVISION_1_2_WRAPPEDCLASS_LEGACY_OPEN_EVISION_1_2_1_2__
#define __WRAPPER_INTERNAL_LEGACY_OPEN_EVISION_1_2_WRAPPEDCLASS_LEGACY_OPEN_EVISION_1_2_1_2__

namespace Wrapper
{

  namespace Internal_Legacy_Open_eVision_1_2
  {
    class WrappedClass
    {
    public:
      typedef void* (*GetterDelegate)(void*);
      typedef void (*SetterDelegate)(void*, void*);
      WrappedClass(void)
      {
        impl_ = NULL;
        parent_ = NULL;
        getInternalImpl_ = NULL;
        setInternalImpl_ = NULL;
      }

      ~WrappedClass(void)
      {
        impl_ = NULL;
        parent_ = NULL;
        getInternalImpl_ = NULL;
        setInternalImpl_ = NULL;
      }

      void SetParent(WrappedClass* parent, GetterDelegate getter, SetterDelegate setter)
      {
        impl_ = NULL;
        parent_ = parent;
        getInternalImpl_ = getter;
        setInternalImpl_ = setter;
      }

      void SetParent(WrappedClass* parent, GetterDelegate getter)
      {
        impl_ = NULL;
        parent_ = parent;
        getInternalImpl_ = getter;
        setInternalImpl_ = NULL;
      }

      WrappedClass* GetParent() const
      {
        return parent_;
      }

      GetterDelegate GetGetter() const
      {
        return getInternalImpl_;
      }

      SetterDelegate GetSetter() const
      {
        return setInternalImpl_;
      }

      virtual void* GetImpl() const
      {
        if (impl_ != NULL)
          return impl_;
        if (parent_ == 0)
          return 0;
        if (getInternalImpl_ == 0)
          return 0;
        return getInternalImpl_(parent_->GetImpl());
      }

      void SetImpl(void* impl)
      {
        if (parent_ == NULL)
          impl_ = impl;
        else
        {
          if(setInternalImpl_ == 0)
            throw "Read only Property";
          delete impl_;
          impl_ = NULL;
          setInternalImpl_(parent_->GetImpl(), impl);
        }
      }

    private:
      void* impl_;
      WrappedClass* parent_;
      GetterDelegate getInternalImpl_;
      SetterDelegate setInternalImpl_;
    };
  }

}

#endif // __WRAPPER_INTERNAL_LEGACY_OPEN_EVISION_1_2_WRAPPEDCLASS_LEGACY_OPEN_EVISION_1_2_1_2__
