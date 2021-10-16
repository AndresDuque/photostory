
#include <memory>
#include <iostream>

#include "Image.h"

int main(){
  std::shared_ptr<model::Image> image = std::make_shared<model::Image>();
  image->setDate("any date");
  std::cout << image->getDate() << std::endl;

}