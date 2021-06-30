#ifndef __SIMPLE_FACTORY_H_
#define __SIMPLE_FACTORY_H_

#include "Product.h"
#include "ConcreateProduct2.h"
#include "ConcreateProduct1.h"

typedef enum _ProductType {
  C1 = 0,
  C2
} ProductType;

class SimpleFactory {
 public:
   Product* makeProduct(ProductType prodcutType);
 private:
};

#endif // __SIMPLE_FACTORY_H_