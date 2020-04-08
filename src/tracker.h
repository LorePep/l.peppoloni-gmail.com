#ifndef TRACKER_HEADERS_H_
#define TRACKER_HEADERS_H_
#endif

#include "bounding_box.h"

class Tracker {
    public:
        virtual void predict(BoundingBox bbox);
        virtual void update();
};