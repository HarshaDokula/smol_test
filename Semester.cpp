#include "Semester.h"

Semester::Semester() {
    this->courses = std::vector<Course*>();
}

void Semester::addCourse(Course* course) {
    this->courses.push_back(course);
}

std::vector<Course*> Semester::getCourses() {
    return this->courses;
}