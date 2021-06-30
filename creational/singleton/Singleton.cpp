#include "Singleton.h"

Singleton* Singleton::instance = nullptr;

static std::mutex mutex;

Singleton::Singleton() {
}

Singleton* Singleton::getInstance() {
  std::lock_guard<std::mutex> lock_guard(mutex);
  if (instance == nullptr) {
    instance = new Singleton();
  }
  return instance;
}

void Singleton::print() {
  std::cout << "singleton" << std::endl;
}