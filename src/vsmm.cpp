#include "../incl/vsmm/vsmm.hpp"
#include <iostream>
#include <vector>

void Vertex::print_vertex_info(){
    std::cout << "Vertex " << label << "Has position" << "\n";
}
Vertex::Vertex(){
    this->label = total_count;
    total_count++;
}
Vertex::Vertex(std::vector<double> position){
    this->label = total_count;
    total_count++;
    this->position = position;
}