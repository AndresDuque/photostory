//
// Created by andres on 16/10/2021.
//

#pragma once

#include <string>

namespace model{
class Image {
private:
  std::string m_date;
public:
  Image() = default;
  void setDate(const std::string &date);
  std::string getDate() const;
};
}