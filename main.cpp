#include <iostream>
#include <vector>
#include "includes/day1_1.h"

int main()
{

  std::cout << "This is a Test"
            << "\n";
  Sonar sf;

  std::vector<int> temp;

  temp.push_back(5);

  sf.setDepth(temp);

  std::cout << "Sonar Tested"
            << "\n";
}