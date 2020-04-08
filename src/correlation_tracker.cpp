#include "correlation_tracker.h"

#include <vector>

CorrelationTracker::CorrelationTracker(int track_id, BoundingBox bbox, array2d<unsigned char> img) {
    track_id_ = track_id;
    std::vector<double> center = bbox.get_center();
    std::vector<double> extent = bbox.get_extent();
    
    tracker_.start_track(img, dlib::centered_rect(point(center[0], center[1]), extent[0], extent[1]));
    frames_since_update_ = 0;
    number_of_hits_ = 0;
    hit_streak_ = 0;
    age_ = 0;
}