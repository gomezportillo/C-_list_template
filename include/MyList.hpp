#pragma once

#include "MyElement.hpp"
#include "ListException.hpp"

template <class T> class MyList
{
public:
  MyList ()
  {
    _root = NULL;
  }

  ~MyList ()
  {
    while(!isEmpty())
    {
      delete getLastElement();
    }
  }

  bool isEmpty ()
  {
    if (_root == NULL)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  void push (const T &e)
  {
    MyElement<T> *new_element = new MyElement<T>(e);

    if (isEmpty())
    {
      new_element->setPrev(_root);
      _root = new_element;
      // std::cout << "Adding root - " << e << "\n";
    }
    else
    {
      MyElement<T> *aux = getLastElement();
      new_element->setPrev(aux);
      aux->setNext(new_element);
      // std::cout << "Adding - " << e << " (parent "<< new_element->getPrev()->getElement() <<")\n";
    }
  }

  T pop ()
  {
    if (isEmpty())
    {
      throw ListException ("ListException::The list is empty");
    }
    else
    {
      MyElement<T> *aux = getLastElement();
      T element = aux->getElement();
      removeLastElement();

      return element;
    }
  }

  MyElement<T>* getLastElement()
  {
    MyElement<T> *aux = _root;
    while(aux->getNext() != NULL)
    {
      aux = aux->getNext();
    }
    return aux;
  }

  void removeLastElement()
  {
    MyElement<T> *aux = _root;
    while(aux->getNext() != NULL)
    {
      aux = aux->getNext();
    }
    if (aux == _root)
    {
      _root = NULL;
    }
    else
    {
      aux->getPrev()->setNext(NULL);
    }
  }

private:
  MyElement<T> *_root;
};
