#ifndef VTRACKER_HEADERS_H_
#define VTRACKER_HEADERS_H_
#endif

#include "tracker.h"
#include <vector>

namespace tracker {

class TrackerManager
{
    public:
        TrackerManager(int maxAge, int minHits) 
            : maxAge(maxAge), minHits(minHits), trackers() {}

    private:
        std::vector<Tracker> trackers;
        int maxAge;
        int minHits;
};

}