#include "Algorithm.h"
#include "Graph.h"

int main() {
    int nCourses;
    std::cout << "Enter the number of courses in the curriculum: ";
    std::cin >> nCourses;

    Graph G(nCourses);

    int v, w;
    std::cout << "Enter the prerequisite pairs (v w), where v is a prerequisite for w. Enter -1 -1 to stop.\n";
    while (true) {
        std::cin >> v >> w;
        if (v == -1 && w == -1) {
            break;
        }
        G.addEdge(v, w);
    }

    Algorithm algo(G);
    int minSemesters = algo.computeMinSemesters();

    std::cout << "The minimum number of semesters necessary to complete the curriculum is: " << minSemesters << std::endl;

    return 0;
}