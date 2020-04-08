#ifndef CORRTRACKER_HEADERS_H_
#define CORRTRACKER_HEADERS_H_
#endif

#include "tracker.h"
#include "bounding_box.h"

using namespace dlib;

class CorrelationTracker: public Tracker {
    private:
        int frames_since_update_;
        int track_id_;
        int number_of_hits_;
        int hit_streak_;
        int age_;
        correlation_tracker tracker_;
    
    public:
        CorrelationTracker(int, BoundingBox, array2d<unsigned char>);

        BoundingBox predict(array2d<unsigned char> img);
        void update(BoundingBox bbox, array2d<unsigned char> img);
};
