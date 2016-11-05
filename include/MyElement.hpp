#pragma once

template <class T> class MyElement
{
public:
  MyElement (const T &e): _element(e) {}

  ~MyElement ()
  {
    delete _prev;
    delete _next;
  }

  void setElement (const T &e)
  {
    _element = e;
  }

  T getElement ()
  {
    return _element;
  }

  void setNext (MyElement<T> *n)
  {
    _next = n;
  }

  MyElement<T>* getNext ()
  {
    return _next;
  }

  void setPrev (MyElement<T> *p)
  {
    _prev = p;
  }

  MyElement<T>* getPrev ()
  {
    return _prev;
  }

private:
  T _element;
  MyElement<T> *_prev, *_next;
};
