#include <iostream>
#include "SimpleFactory.h"

int main() {
    SimpleFactory* simpleFactory = new SimpleFactory();
    Product* product = simpleFactory->makeProduct(C1);
    product->printProduct();
    Product* product2 = simpleFactory->makeProduct(C2);
    product2->printProduct();
    return 0;
}