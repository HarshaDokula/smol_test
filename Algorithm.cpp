#include "Algorithm.h"
#include <queue>

Algorithm::Algorithm(Graph* graph, int nCourses) {
    this->graph = graph;
    this->nCourses = nCourses;
}

int Algorithm::computeMinSemesters() {
    std::vector<int> inDegree(nCourses, 0);
    for (int i = 0; i < nCourses; i++) {
        for (Course* course : graph->getAdjCourses(i)) {
            inDegree[course->getId()]++;
        }
    }

    std::queue<int> q;
    for (int i = 0; i < nCourses; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    int semesters = 0;
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            int course = q.front();
            q.pop();
            for (Course* nextCourse : graph->getAdjCourses(course)) {
                if (--inDegree[nextCourse->getId()] == 0) {
                    q.push(nextCourse->getId());
                }
            }
        }
        semesters++;
    }

    return semesters;
}