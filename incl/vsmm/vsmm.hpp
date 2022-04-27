#ifndef VSMM_H
#define VSMM_H

#include <iostream>
#include <vector>

class Vertex{
    inline static int count = 0;

    int label;
    public:
        double x;
        double y;

        void print_vertex_info();

        Vertex();
        Vertex(double x, double y);
};

class Vector{
    inline static int count = 0;

    public:
        Vertex org;
        Vertex end;

        double mag;
        double dir;

        Vector(Vertex origin, Vertex end);
};

#endif