#ifndef __SINGLETON_H_
#define __SINGLETON_H_

#include <iostream>
#include <mutex>

class Singleton {
 public:
  Singleton();
  ~Singleton();
  static Singleton* getInstance();
  void print();
 private:
  static Singleton * instance;
};
#endif // __SINGLETON_H_