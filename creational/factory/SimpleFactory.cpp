#include "SimpleFactory.h"

Product* SimpleFactory::makeProduct(ProductType productType) {
  switch(productType) {
  case C1:
    return new ConcreateProdcut1();
    break;
  case C2:
    return new ConcreateProduct2();
    break;
  default:
    break;
  }
  return nullptr;
}