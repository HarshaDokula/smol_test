#include "Graph.h"
#include "Course.h"

Graph::Graph(int nCourses) {
    this->nCourses = nCourses;
    adjList = new std::list<Course*>[nCourses];
}

void Graph::addEdge(Course* v, Course* w) {
    adjList[v->getId()].push_back(w); // Add w to v’s list.
}

std::list<Course*>* Graph::getAdjList() {
    return adjList;
}

int Graph::getNCourses() {
    return nCourses;
}