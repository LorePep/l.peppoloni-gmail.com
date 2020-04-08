#ifndef TRACKER_HEADERS_H_
#define TRACKER_HEADERS_H_
#endif

#include <dlib/image_processing.h>
#include "bounding_box.h"

using namespace dlib;


class Tracker {
    public:
        virtual BoundingBox predict(array2d<unsigned char> img);
        virtual void update(BoundingBox bbox, array2d<unsigned char> img);
};