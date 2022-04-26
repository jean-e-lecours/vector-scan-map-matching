#ifndef VSMM_H
#define VSMM_H

#include <iostream>
#include <vector>

class Vertex{
    inline static int total_count = 0;
    inline static int dimensions = 2;

    int label;
    public:
        std::vector<double> position;

        void print_vertex_info();

        Vertex();
        Vertex(std::vector<double> position);
};

#endif