#ifndef day2_2_h
#define day2_2_h

#include <stdio.h>
#include <vector>

class Sonar
{
public:
  void setDepth(std::vector<int> initDepths);

  std::vector<int> depths;
};

#endif /* day2_2_h */