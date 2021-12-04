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

    void enterCoordinate(Line line_);

    void addHorizontal(int mag);

    void addVertical(int mag);

private:
    int horizontal;
    int vertical;
};

#endif /* day2_1_h */
