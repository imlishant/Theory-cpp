#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Vertex {
    float x, y, z;
    
    Vertex(float x, float y, float z)
        : x(x), y(y), z(z)
    {
    }
    Vertex(const Vertex& vertex)
        : x(vertex.x), y(vertex.y), z(vertex.z)
    {
        cout << "Copied\n";
    }
    
};

int main() 
{
	vector<Vertex> vertices;
	vertices.push_back(Vertex(1, 2, 3));
	vertices.push_back(Vertex(4, 5, 6));
	vertices.push_back(Vertex(7, 8, 9));
	
	return 0;
}

/*
Output::

Copied
Copied
Copied
Copied
Copied
Copied


*/
