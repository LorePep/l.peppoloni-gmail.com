#ifndef VTRACKER_HEADERS_H_
#define VTRACKER_HEADERS_H_

#endif

namespace tracker {

class TrackerManager
{
    public:
        TrackerManager(int maxAge, int minHits) 
            : maxAge(maxAge), minHits(minHits) {}

    private:
        int maxAge;
        int minHits;
};

}