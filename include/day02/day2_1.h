#ifndef day2_1_h
#define day2_1_h

#include <stdio.h>
#include <vector>

class Pilot
{
public:
    typedef std::vector<std::string> Coor;
    typedef std::vector<Coor> Line;

    Pilot();

    void enterCoordinate(Coor line_);

    // function to apply rules for part 2
    void enterCoordinatePart2(Coor line_);

    void addHorizontal(int mag);

    void addDepth(int mag);

    void addAim(int mag);

    Line directions;

    // function to look at each direction inside the directions vector.
    // Each direction is added to horizontal or vertical.
    void readDirections(int type);

    void DisplayCoordinates();

    void DisplayCoorMultiple();

private:
    int horizontal;
    int depth;
    int aim;
};

// main function that the solution to day 2 is run from.
void day2Main();

#endif /* day2_1_h */
