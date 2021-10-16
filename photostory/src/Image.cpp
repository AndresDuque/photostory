
#include "Image.h"

namespace model{

void Image::setDate(const std::string &date){
  m_date = date;
}
std::string Image::getDate() const {
  return m_date;
}
}