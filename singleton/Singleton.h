#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

class Singleton
{
public:
  static Singleton* getInstance()
  {
      static Singleton instance;
      printf("Singleton!/n");
      return &instance;
  }
protected:
//

private:
    Singleton();

#if (__cplusplus < 201703L)
public:
    SINGLETON(Singleton *const)   = delete;
    void operator=(Singleton *const) = delete;
#else
private:
    SINGLETON(Singleton const&);   // Don't Implement
    void operator=(Singleton const&); // Don't implement
#endif
};

#endif // SINGLETON_H
