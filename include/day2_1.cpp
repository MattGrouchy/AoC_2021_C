
#include "day2_1.h"
#include <sstream>
#include <fstream>
#include <iostream>
#include "txt_read_write.h"

Pilot::Pilot() : horizontal(0), depth(0), aim(0) {}

void Pilot::enterCoordinate(Pilot::Coor line_)
{
  if (line_[0] == "forward")
  {

    std::stringstream magnitude(line_[1]);

    int x = 0;
    magnitude >> x;

    addHorizontal(x);
  }
  else if (line_[0] == "down")
  {

    std::stringstream magnitude(line_[1]);

    int x = 0;
    magnitude >> x;

    addDepth(x);
  }
  else if (line_[0] == "up")
  {

    std::stringstream magnitude(line_[1]);

    int x = 0;
    magnitude >> x;

    addDepth(x * -1);
  }
}

void Pilot::addDepth(int mag)
{
  depth += mag;
}

void Pilot::addHorizontal(int mag)
{
  horizontal += mag;
}

void Pilot::addAim(int mag)
{
  aim += mag;
}

// function to look at each direction inside the directions vector.
// Each direction is added to horizontal or vertical.
void Pilot::readDirections(int type)
{
  if (type == 1)
  {
    // check if this is for puzzle 1 or 2.
    for (Pilot::Coor direction : directions)
    {
      enterCoordinate(direction);
    }
  }
  else
  {
    // check if this is for puzzle 1 or 2.
    for (Pilot::Coor direction : directions)
    {
      enterCoordinatePart2(direction);
    }
  }
}

void Pilot::DisplayCoordinates()
{
  std::cout << "Horizontal: " << horizontal << " Vertical: " << depth << " Aim: " << aim << "\n";
}

void Pilot::DisplayCoorMultiple()
{
  std::cout << "Horizontal * Depth: " << horizontal * depth << "\n";
}

// Using the class to solve the problem
void day2Main()
{

  std::fstream directions("day2.txt");

  std::string line;

  Pilot pf;

  Pilot pf2;

  std::cout << "reading"
            << "\n";

  if (directions.is_open())
  {
    std::cout << "File open"
              << "\n";
    while (std::getline(directions, line))
    {
      // Separate each lines elements by a space
      std::vector<std::string> direct = tokenize(line, " ");

      // Add ["direction", "an int"] to pf.directions
      pf.directions.push_back(direct);
      pf2.directions.push_back(direct);
    }

    pf.readDirections(1);
    pf.DisplayCoordinates();
    pf.DisplayCoorMultiple();

    pf2.readDirections(2);
    pf2.DisplayCoordinates();
    pf2.DisplayCoorMultiple();
  }
  else
  {
    std::cout << "Could not open file"
              << "\n";
  }
}

void Pilot::enterCoordinatePart2(Pilot::Coor line_)
{
  if (line_[0] == "forward")
  {
    // increase horizontal by x.
    // increase depth by aim*x.

    std::stringstream magnitude(line_[1]);

    int x = 0;
    magnitude >> x;

    addHorizontal(x);
    addDepth(aim * x);
  }
  else if (line_[0] == "down")
  {
    // increase aim by x.

    std::stringstream magnitude(line_[1]);

    int x = 0;
    magnitude >> x;

    addAim(x);
  }
  else if (line_[0] == "up")
  {
    // decrease aim by x.

    std::stringstream magnitude(line_[1]);

    int x = 0;
    magnitude >> x;

    addAim(x * -1);
  }
}