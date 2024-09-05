#ifndef __EVISION_PROPERTY__
#define __EVISION_PROPERTY__
#include <string>

namespace Euresys
{
  namespace eVision
  {
    namespace Internal
    {
      namespace Properties
      {
        template<typename T>
        class Helpers
        {
        public:
          static void SetImpl(T*, void*);
          static void* GetImpl(T*);
        };

        namespace NotWrapped
        {
          /// Classe g�rant les propri�t�s dans le cas de types n'�tant pas wrapp�s (binairements compatibles, string, ...)
          /// La variable doit �tre utilis�e par Valeur.
          /// T est le type en question
          /// Il faut avoir dans l'API C deux fonctions :
          ///   - Getter : T getter(void*)
          ///     La valeur retourn�e est la valeur interne (pass�e par valeur)
          ///     Le premier argument est un pointeur vers l'objet interne contenant la variable.
          ///   - Setter : void setter(void*, T);
          template<typename T>
          class Property
          {
            typedef T (*GetterDelegate)(void*);
            typedef void (*SetterDelegate)(void*, T);
            Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass* parent_;
            GetterDelegate getter_;
            SetterDelegate setter_;
            std::string c_str_temp_;
          public:
            const char* c_str() const
            {
              std::string temp = (std::string)(*this);
              if(c_str_temp_ != temp)
                const_cast<Property<T>*>(this)->c_str_temp_ = temp;
              return c_str_temp_.c_str();
            }
            int length() const
            {
              return ((std::string)(*this)).length();
            }

            Property(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor)
            {
              parent_ = 0;
              getter_ = 0;
              setter_ = 0;
            }

            Property()
            {
              parent_ = 0;
              getter_ = 0;
              setter_ = 0;
            }

            // Cast vers dans le type voulu. (par copie, pas de souvis, on est en mode ForeignType)
            operator T() const
            {
              return getter_(parent_->GetImpl());
            }

            Property& operator= (const T& val)
            {
              setter_(parent_->GetImpl(), val);
              return *this;
            }

            void SetParent(Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass* parent, GetterDelegate getter, SetterDelegate setter)
            {
              parent_ = parent;
              getter_ = getter;
              setter_ = setter;
            }
          private:
            Property(const Property&);
          };
          template<typename T>
          inline std::ostream& operator<<(std::ostream& stream, const Property<T>& prop)
          {
            stream << (T)prop;
            return stream;
          }


          /// Classe g�rant les propri�t�s dans le cas de types n'�tant pas wrapp�s (binairements compatibles, string, ...)
          /// Cette propri�t� a la particularit� d'�tre read only
          /// T est le type en question.
          /// Il faut avoir dans l'API C une fonction :
          ///   - Getter : T getter(void*)
          ///     La valeur retourn�e est la valeur interne (pass�e par valeur)
          ///     Le premier argument est un pointeur vers l'objet interne contenant la variable.
          template<typename T>
          class Property_ReadOnly
          {
            typedef T (*GetterDelegate)(void*);
            Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass* parent_;
            GetterDelegate getter_;
            std::string c_str_temp_;
          public:
            const char* c_str() const
            {
              std::string temp = (std::string)(*this);
              if(c_str_temp_ != temp)
                const_cast<Property_ReadOnly<T>*>(this)->c_str_temp_ = temp;
              return c_str_temp_.c_str();
            }
            int length() const
            {
              return ((std::string)(*this)).length();
            }

            Property_ReadOnly(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor)
            {
              parent_ = 0;
              getter_ = 0;
            }
            Property_ReadOnly()
            {
              parent_ = 0;
              getter_ = 0;
            }
            operator T() const
            {
              return getter_(parent_->GetImpl());
            }
            void SetParent(Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass* parent, GetterDelegate getter)
            {
              parent_ = parent;
              getter_ = getter;
            }
          private:
            Property_ReadOnly(const Property_ReadOnly&);
            Property_ReadOnly& operator= (const T& val);
          };
          template<typename T>
          inline std::ostream& operator<<(std::ostream& stream, const Property_ReadOnly<T>& prop)
          {
            stream << (T)prop;
            return stream;
          }

          /// Classe utilis�e dans le cadre des vecteurs de types n'�tant pas wrapp�s (binairements compatibles, string, ...)
          /// Elle est retourn�e par l'operator[] de la classe Property_Vector.
          /// Elle a le m�me type template que la classe Property_Vector associ�e.
          /// Elle permet la r�cup�ration effective de la valeur interne, ainsi que
          /// la modification effective de la dite valeur.
          /// Dans les faits, elle fait la m�me chose qu'une classe Property � l'exception
          /// qu'elle contient un index d�signant l'�l�ment � modifier.
          /// Le constructeur de copie est d�fini car n�cessaire dans l'operator[] de Property_Vector.
          /// Le constructeur de copie ne fait que copier les parent, getter, setter et index. Mais en 
          /// aucun cas, il ne copie la valeur interne.
          /// Elle n�cessite deux fonctions dans l'API C:
          ///   - Getter : T getter(void*, int)
          ///     La valeur retourn�e est la valeur interne (pass�e par valeur)
          ///     Le premier argument est un pointeur vers l'objet interne contenant la variable.
          ///     Le second argument est l'index de l'�l�ment voulu dans le vecteur.
          ///   - Setter : void setter(void*, int, T);
          ///     Le premier argument est un poineteur vers l'objet interne contenant la variable.
          ///     Le second argument est l'index de l'�l�ment � modifier dans le vecteur.
          ///     Le troisi�me argument est la valeur � donner � l'�l�ment.
          template<typename T>
          class Property_Vector_Redirector
          {
          public:
            typedef T (*GetterDelegate)(void*, int);
            typedef void (*SetterDelegate)(void*, int, T);
          private:
            GetterDelegate getter_;
            SetterDelegate setter_;
            Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass* parent_;
            int index_;
          public:
            Property_Vector_Redirector(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor)
            {
              parent_ = 0;
              getter_ = 0;
              setter_ = 0;
            }

            Property_Vector_Redirector()
            {
              parent_ = 0;
              getter_ = 0;
              setter_ = 0;
            }

            Property_Vector_Redirector(const Property_Vector_Redirector& other)
            {
              parent_ = other.parent_;
              getter_ = other.getter_;
              setter_ = other.setter_;
              index_ = other.index_;
            }

            operator T() const
            {
              return getter_(parent_->GetImpl(), index_);
            }

            Property_Vector_Redirector& operator= (const T& val)
            {
              setter_(parent_->GetImpl(), index_, val);
              return *this;
            }

            void SetParent(Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass* parent, int index, GetterDelegate getter, SetterDelegate setter)
            {
              parent_ = parent;
              index_ = index;
              getter_ = getter;
              setter_ = setter;
            }
          };

          /// Classe g�rant les propri�t�s dans le cas de vecteurs de types n'�tant pas wrapp�s (binairements compatibles, string, ...)
          /// T est le type en question.
          /// Elle contient en + des �l�ments d'une Property, les m�thodes suivantes :
          ///   - Property_Vector_Redirector operator[](int); 
          ///   - void Add(const T& value);
          ///   - void AddOnce(const T& value);
          ///   - void Clear();
          ///   - void ClearAndKeepMemory();
          ///   - bool Contains(const T& value) const;
          ///   - int Find(const T& value) const;
          ///   - void InsertItem(const T& value, int index);
          ///   - T ItemAt(int index);
          ///   - T ItemAt(int index) const;
          ///   - int NbItems() const;
          ///   - void Remove(const T& value);
          ///   - void Remove(int index);
          ///   - void SetSize(int size);
          ///   - bool operator!=(const T& value);
          ///   - void operator==(const T& value);
          ///
          /// A l'exception de l'operator[], toutes les m�thodes doivent �tre �crites � la main pour chaque variable.
          /// Il faut donc des fonctions qui permettent de rendre ces services dans l'API C
          /// (voir dans l'API CPP wrapp�e lorsque c'est faisable).
          /// Le second argument template (VariableID) est un nombre unique permettant de diff�rencier les fonctions
          /// en fonction de la variable. En effet, les fonctions � �crire � la main doivent �tre
          /// diff�rentes pour CHAQUE variable.
          template<typename T, int VariableID>
          class Property_Vector
          {
            typename Property_Vector_Redirector<T>::GetterDelegate getter_;
            typename Property_Vector_Redirector<T>::SetterDelegate setter_;
            Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass* parent_;
          public:
            Property_Vector(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor)
            {
              parent_ = 0;
              getter_ = 0;
              setter_ = 0;
            }

            Property_Vector()
            {
              parent_ = 0;
              getter_ = 0;
              setter_ = 0;
            }

            void SetParent(Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass* parent, typename Property_Vector_Redirector<T>::GetterDelegate getter, typename Property_Vector_Redirector<T>::SetterDelegate setter)
            {
              parent_ = parent;
              getter_ = getter;
              setter_ = setter;
            }

            /// Ne retourne PAS une ref. Car Property_Vector_Redirector est copiable comme il faut pour que �a fonctionne
            Property_Vector_Redirector<T> operator[](int index) const
            {
              Property_Vector_Redirector<T> toReturn;
              toReturn.SetParent(parent_, index, getter_, setter_);
              return toReturn;
            }

            bool Contains(const T& value) const
            {
              unsigned int nbElem = this->GetNumElements();
              unsigned int i;
              for(i = 0; i < nbElem; ++i)
              {
                if(value == (T)((*this)[i]))
                  return true;
              }
              return false;
            }

            int Find(const T& value) const
            {
              unsigned int nbElem = this->GetNumElements();
              unsigned int i;
              for(i = 0; i < nbElem; ++i)
              {
                if(value == (T)((*this)[i]))
                  return i;
              }
              return -1;
            }
            T ItemAt(int index)
            {
              return (T)((*this)[index]);
            }
            T ItemAt(int index) const
            {
              return (T)((*this)[index]);
            }
            int NbItems() const
            {
              return this->GetNumElements();
            }
            ///-------------------------------------------
            /// A �crire � la main pour chaque variable
            void Add(const T& value);
            void AddOnce(const T& value);
            void Clear();
            void ClearAndKeepMemory();
            void InsertItem(const T& value, int index);
            void Remove(const T& value);
            void Remove(int index);
            void SetSize(int size);
            bool operator!=(const T& value);
            void operator==(const T& value);
            unsigned int GetNumElements() const;

          private:
            Property_Vector(const Property_Vector&);
            Property_Vector& operator=(const Property_Vector&);
          };

          template<typename T, int VariableID>
          class Property_Vector_ReadOnly
          {
            typename Property_Vector_Redirector<T>::GetterDelegate getter_;
            Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass* parent_;
          public:
            Property_Vector_ReadOnly(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor)
            {
              parent_ = 0;
              getter_ = 0;
            }

            Property_Vector_ReadOnly()
            {
              parent_ = 0;
              getter_ = 0;
            }

            void SetParent(Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass* parent, typename Property_Vector_Redirector<T>::GetterDelegate getter)
            {
              parent_ = parent;
              getter_ = getter;
            }

            /// Ne retourne PAS une ref. Car Property_Vector_Redirector est copiable comme il faut pour que �a fonctionne
            Property_Vector_Redirector<T> operator[](int index) const
            {
              Property_Vector_Redirector<T> toReturn;
              toReturn.SetParent(parent_, index, getter_, 0);
              return toReturn;
            }

            bool Contains(const T& value) const
            {
              unsigned int nbElem = this->GetNumElements();
              unsigned int i;
              for(i = 0; i < nbElem; ++i)
              {
                if(value == (T)((*this)[i]))
                  return true;
              }
              return false;
            }

            int Find(const T& value) const
            {
              unsigned int nbElem = this->GetNumElements();
              unsigned int i;
              for(i = 0; i < nbElem; ++i)
              {
                if(value == (T)((*this)[i]))
                  return i;
              }
              return -1;
            }
            T ItemAt(int index)
            {
              return (T)((*this)[index]);
            }
            T ItemAt(int index) const
            {
              return (T)((*this)[index]);
            }
            int NbItems() const
            {
              return this->GetNumElements();
            }
            ///-------------------------------------------
            /// A �crire � la main pour chaque variable
            bool operator!=(const T& value);
            void operator==(const T& value);
            unsigned int GetNumElements() const;
              
          private:
            Property_Vector_ReadOnly(const Property_Vector_ReadOnly&);
            Property_Vector_ReadOnly& operator=(const Property_Vector_ReadOnly&);
          };
        }
        namespace Wrapped
        {
          /// Les classes permetant d'exposer des variables d'un type wrapp� sont moins nombreuses que celles pout les �l�ments non wrapp�s.
          /// En effet, ces classes wrapp�es ont en elles un membre Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass qui permet de faire l'indirection directement.
          /// ATTENTION Ceci n'est vrai que si la variable est une valeur. Dans le cas d'un pointeur, cela ne fonctionne pas.


          /// Classe g�rant les propri�t�s dans le cas de vecteurs de types n'�tant pas wrapp�s (binairements compatibles, string, ...)
          /// T est le type en question.
          /// Elle contient en + des �l�ments d'une Property, les m�thodes suivantes :
          ///   - Property_Vector_Redirector operator[](int); 
          ///   - void Add(const T& value);
          ///   - void AddOnce(const T& value);
          ///   - void Clear();
          ///   - void ClearAndKeepMemory();
          ///   - bool Contains(const T& value) const;
          ///   - int Find(const T& value) const;
          ///   - void InsertItem(const T& value, int index);
          ///   - T ItemAt(int index);
          ///   - T ItemAt(int index) const;
          ///   - int NbItems() const;
          ///   - void Remove(const T& value);
          ///   - void Remove(int index);
          ///   - void SetSize(int size);
          ///   - bool operator!=(const T& value);
          ///   - void operator==(const T& value);
          ///
          /// A l'exception de l'operator[], toutes les m�thodes doivent �tre �crites � la main pour chaque variable.
          /// Il faut donc des fonctions qui permettent de rendre ces services dans l'API C
          /// (voir dans l'API CPP wrapp�e lorsque c'est faisable).
          /// Le second argument template (VariableID) est un nombre unique permettant de diff�rencier les fonctions
          /// en fonction de la variable. En effet, les fonctions � �crire � la main doivent �tre
          /// diff�rentes pour CHAQUE variable.
          template<typename T, int VariableID>
          class Property_Vector
          {
            typedef void* (*GetterDelegate)(void*, int);
            typedef void (*SetterDelegate)(void*, int, void*);
            typedef void* (*WrapperGetterDelegate)(const void*, void**);

            GetterDelegate getter_;
            SetterDelegate setter_;
            WrapperGetterDelegate wrappergetter_;
            Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass* parent_;
          public:
            Property_Vector(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor)
            {
              parent_ = 0;
              getter_ = 0;
              setter_ = 0;
              wrappergetter_ = 0;
            }

            Property_Vector()
            {
              parent_ = 0;
              getter_ = 0;
              setter_ = 0;
              wrappergetter_ = 0;
            }

            void SetParent(Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass* parent, GetterDelegate getter, SetterDelegate setter, WrapperGetterDelegate wrappergetter)
            {
              parent_ = parent;
              getter_ = getter;
              setter_ = setter;
              wrappergetter_ = wrappergetter;
            }

            T& operator[](int index) 
            {
              void* internalValue = getter_(parent_->GetImpl(), index);
              void* externalValue = 0;
              wrappergetter_(internalValue, &externalValue);
              if(externalValue != 0)
                return *reinterpret_cast<T*>(externalValue);
              T* newExternalValue = new T(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
              Helpers<T>::SetImpl(newExternalValue, internalValue);
              return *newExternalValue;
            }

            const T& operator[](int index) const
            {
              Property_Vector<T, VariableID>* pThis = const_cast<Property_Vector<T, VariableID>*>(this);
              void* internalValue = pThis->getter_(pThis->parent_->GetImpl(), index);
              void* externalValue = 0;
              wrappergetter_(internalValue, &externalValue);
              if(externalValue != 0)
                return *reinterpret_cast<T*>(externalValue);
              T* newExternalValue = new T(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
              Helpers<T>::SetImpl(newExternalValue, internalValue);
              return *newExternalValue;
            }

            bool Contains(const T& value) const
            {
              unsigned int nbElem = this->GetNumElements();
              unsigned int i;
              for(i = 0; i < nbElem; ++i)
              {
                if(value == (T)((*this)[i]))
                  return true;
              }
              return false;
            }

            int Find(const T& value) const
            {
              unsigned int nbElem = this->GetNumElements();
              unsigned int i;
              for(i = 0; i < nbElem; ++i)
              {
                if(value == (T)((*this)[i]))
                  return i;
              }
              return -1;
            }
            T ItemAt(int index)
            {
              return (T)((*this)[index]);
            }
            T ItemAt(int index) const
            {
              return (T)((*this)[index]);
            }
            int NbItems() const
            {
              return this->GetNumElements();
            }
 
            ///-------------------------------------------
            /// A �crire � la main pour chaque variable
            void Add(const T& value);
            void AddOnce(const T& value);
            void Clear();
            void ClearAndKeepMemory();
            void InsertItem(const T& value, int index);
            void Remove(const T& value);
            void Remove(int index);
            void SetSize(int size);
            bool operator!=(const T& value);
            void operator==(const T& value);
            unsigned int GetNumElements() const;

          private:
            Property_Vector(const Property_Vector&);
            Property_Vector& operator=(const Property_Vector&);
          };

          template<typename T, int VariableID>
          class Property_Vector_ReadOnly
          {
            typedef void* (*GetterDelegate)(void*, int);
            typedef void* (*WrapperGetterDelegate)(const void*, void**);

            GetterDelegate getter_;
            WrapperGetterDelegate wrappergetter_;
            Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass* parent_;
          public:
            Property_Vector_ReadOnly(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor)
            {
              parent_ = 0;
              getter_ = 0;
              wrappergetter_ = 0;
            }

            Property_Vector_ReadOnly()
            {
              parent_ = 0;
              getter_ = 0;
              wrappergetter_ = 0;
            }

            void SetParent(Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass* parent, GetterDelegate getter, WrapperGetterDelegate wrappergetter)
            {
              parent_ = parent;
              getter_ = getter;
              wrappergetter_ = wrappergetter;
            }

            T& operator[](int index)
            {
              void* internalValue = getter_(parent_->GetImpl(), index);
              void* externalValue = 0;
              wrappergetter_(internalValue, &externalValue);
              if(externalValue != 0)
                return *reinterpret_cast<T*>(externalValue);
              T* newExternalValue = new T(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
              Helpers<T>::SetImpl(newExternalValue, internalValue);
              return *newExternalValue;
            }

            const T& operator[](int index) const
            {
              Property_Vector<T, VariableID>* pThis = const_cast<Property_Vector<T, VariableID>*>(this);
              void* internalValue = pThis->getter_(pThis->parent_->GetImpl(), index);
              void* externalValue = 0;
              wrappergetter_(internalValue, &externalValue);
              if(externalValue != 0)
                return *reinterpret_cast<T*>(externalValue);
              T* newExternalValue = new T(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
              Helpers<T>::SetImpl(newExternalValue, internalValue);
              return *newExternalValue;
            }

            bool Contains(const T& value) const
            {
              unsigned int nbElem = this->GetNumElements();
              unsigned int i;
              for(i = 0; i < nbElem; ++i)
              {
                if(value == (T)((*this)[i]))
                  return true;
              }
              return false;
            }

            int Find(const T& value) const
            {
              unsigned int nbElem = this->GetNumElements();
              unsigned int i;
              for(i = 0; i < nbElem; ++i)
              {
                if(value == (T)((*this)[i]))
                  return i;
              }
              return -1;
            }
            T ItemAt(int index)
            {
              return (T)((*this)[index]);
            }
            T ItemAt(int index) const
            {
              return (T)((*this)[index]);
            }
            int NbItems() const
            {
              return this->GetNumElements();
            }
            ///-------------------------------------------
            /// A �crire � la main pour chaque variable
            bool operator!=(const T& value);
            void operator==(const T& value);
            unsigned int GetNumElements() const;
 
          private:
            Property_Vector_ReadOnly(const Property_Vector_ReadOnly&);
            Property_Vector_ReadOnly& operator=(const Property_Vector_ReadOnly&);
          };

          template<typename T>
          class Property_Pointer
          {
            typedef void* (*GetterDelegate)(void*);
            typedef void (*SetterDelegate)(void*, void*);
            typedef void* (*WrapperGetterDelegate)(const void*, void**);
            Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass* parent_;
            GetterDelegate getter_;
            SetterDelegate setter_;
            WrapperGetterDelegate wrappergetter_;
          public:
            Property_Pointer(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor)
            {
              parent_ = 0;
              getter_ = 0;
              setter_ = 0;
              wrappergetter_ = 0;
            }

            Property_Pointer()
            {
              parent_ = 0;
              getter_ = 0;
              setter_ = 0;
              wrappergetter_ = 0;
            }

            // Cast vers dans le type voulu. (par copie, pas de souvis, on est en mode ForeignType)
            operator T*() const
            {
              void* internalValue = getter_(parent_->GetImpl());
              void* externalValue = 0;
              wrappergetter_(internalValue, &externalValue);
              if(externalValue != 0)
                return reinterpret_cast<T*>(externalValue);
              T* newExternalValue = new T(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
              Helpers<T>::SetImpl(newExternalValue, internalValue);
              return newExternalValue;
            }

            T* operator->()
            {
              return (T*)(*this);
            }

            Property_Pointer<T> operator=(T* other)
            {
              void* internalValue = Helpers<T>::GetImpl(other);
              setter_(parent_->GetImpl(), internalValue);
              return *this;
            }

            Property_Pointer& operator= (const T& val)
            {
              void* internalValue = Helpers<T>::GetImpl(other);
              setter_(parent_->GetImpl(), internalValue);
              return *this;
            }

            void SetParent(Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass* parent, GetterDelegate getter, SetterDelegate setter, WrapperGetterDelegate wrappergetter)
            {
              parent_ = parent;
              getter_ = getter;
              setter_ = setter;
              wrappergetter_ = wrappergetter;
            }

            Property_Pointer(const Property_Pointer& other)
            {
              parent_ = other.parent_;
              getter_ = other.getter_;
              setter_ = other.setter_;
              wrappergetter_ = other.wrappergetter_;
            }
          };
        }
      }
    }
  }
}
#endif



