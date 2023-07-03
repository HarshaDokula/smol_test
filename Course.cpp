#include "Course.h"

Course::Course(int id) : id(id), prerequisites(0), visited(false) {}

int Course::getId() const {
    return id;
}

int Course::getPrerequisites() const {
    return prerequisites;
}

void Course::addPrerequisite() {
    prerequisites++;
}

void Course::removePrerequisite() {
    if (prerequisites > 0) {
        prerequisites--;
    }
}

bool Course::isVisited() const {
    return visited;
}

void Course::setVisited(bool visited) {
    this->visited = visited;
}