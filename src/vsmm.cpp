#include "../incl/vsmm/vsmm.hpp"
#include <iostream>
#include <vector>

void Vertex::print_vertex_info(){
    std::cout << "Vertex " << label << "Has position" << "\n";
}
Vertex::Vertex(){
    this->label = count;
    count++;
}
Vertex::Vertex(double x, double y){
    this->label = count;
    count++;
    this->x = x;
    this->y = y;
}

Vector::Vector(Vertex origin, Vertex end){
    this->org = origin;
    this->end = end;
}