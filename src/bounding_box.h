#ifndef BBOX_HEADERS_H_
#define BBOX_HEADERS_H_
#endif

#include <vector>

class  BoundingBox{
    public:
        BoundingBox(std::vector<double> center, std::vector<double> extent) : center_(center), extent_(extent) {}
        std::vector<double> get_center() {return center_;};
        std::vector<double> get_extent() {return extent_;};

    private:
        std::vector<double> center_;
        std::vector<double> extent_;
};
