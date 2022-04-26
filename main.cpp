#include <iostream>
#include <vector>
#include "incl/vsmm/vsmm.hpp"

int main(){
    std::cout << "This is the start of a new project!\n";
    std::vector<double> pos = {1,2};
    Vertex test_vertex(pos);
    test_vertex.print_vertex_info();
    return 0;
}