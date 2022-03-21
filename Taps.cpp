#include "gps.hpp"

void GPS::set_taps(int prn_id)
{
    switch (prn_id)
    {
    case 1:
        taps_[0] = 2;
        taps_[1] = 6;
        break;
    case 2:
        taps_[0] = 3;
        taps_[1] = 7;
        break;
    case 3:
        taps_[0] = 4;
        taps_[1] = 8;
        break;
    case 4:
        taps_[0] = 5;
        taps_[1] = 9;
        break;
    case 5:
        taps_[0] = 1;
        taps_[1] = 9;
        break;
    case 6:
        taps_[0] = 2;
        taps_[1] = 10;
        break;
    case 7:
        taps_[0] = 1;
        taps_[1] = 8;
        break;
    case 8:
        taps_[0] = 2;
        taps_[1] = 9;
        break;
    case 9:
        taps_[0] = 3;
        taps_[1] = 10;
        break;
    case 10:
        taps_[0] = 2;
        taps_[1] = 3;
        break;
    case 11:
        taps_[0] = 3;
        taps_[1] = 4;
        break;
    case 12:
        taps_[0] = 5;
        taps_[1] = 6;
        break;
    case 13:
        taps_[0] = 6;
        taps_[1] = 7;
        break;
    case 14:
        taps_[0] = 7;
        taps_[1] = 8;
        break;
    case 15:
        taps_[0] = 8;
        taps_[1] = 9;
        break;
    case 16:
        taps_[0] = 9;
        taps_[1] = 10;
        break;
    case 17:
        taps_[0] = 1;
        taps_[1] = 4;
        break;
    case 18:
        taps_[0] = 2;
        taps_[1] = 5;
        break;
    case 19:
        taps_[0] = 3;
        taps_[1] = 6;
        break;
    case 20:
        taps_[0] = 4;
        taps_[1] = 7;
        break;
    case 21:
        taps_[0] = 5;
        taps_[1] = 8;
        break;
    case 22:
        taps_[0] = 6;
        taps_[1] = 9;
        break;
    case 23:
        taps_[0] = 1;
        taps_[1] = 3;
        break;
    case 24:
        taps_[0] = 4;
        taps_[1] = 6;
        break;
    case 25:
        taps_[0] = 5;
        taps_[1] = 7;
        break;
    case 26:
        taps_[0] = 6;
        taps_[1] = 8;
        break;
    case 27:
        taps_[0] = 7;
        taps_[1] = 9;
        break;
    case 28:
        taps_[0] = 8;
        taps_[1] = 10;
        break;
    case 29:
        taps_[0] = 1;
        taps_[1] = 6;
        break;
    case 30:
        taps_[0] = 2;
        taps_[1] = 7;
        break;
    case 31:
        taps_[0] = 3;
        taps_[1] = 8;
        break;
    case 32:
        taps_[0] = 4;
        taps_[1] = 9;
        break;
    }
    // cout << taps_[0] << " & " << taps_[1] << endl;
}
