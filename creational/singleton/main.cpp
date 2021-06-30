#include <iostream>

#include "Singleton.h"

using namespace std;

int main() {
  Singleton *singleton = Singleton::getInstance();
  singleton->print();
  return 0;
}