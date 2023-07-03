#include "Course.h"
#include <vector>
#include <list>

class Graph {
public:
    Graph(int nCourses); // Constructor
    void addEdge(int v, int w); // Function to add an edge to graph
    std::vector<Course> getCourses(); // Function to get all courses

private:
    int nCourses; // No. of vertices
    std::vector<Course> courses; // An array of courses
    std::list<int> *adj; // An array of adjacency lists
};