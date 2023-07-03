#ifndef ALGORITHM_H
#define ALGORITHM_H

#include "Graph.h"
#include "Semester.h"

class Algorithm {
public:
    Algorithm(Graph* graph, int nCourses);
    int computeMinSemesters();

private:
    Graph* graph;
    int nCourses;
    std::vector<Semester> semesters;
};

#endif //ALGORITHM_H