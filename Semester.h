#ifndef SEMESTER_H
#define SEMESTER_H

#include <vector>
#include "Course.h"

class Semester {
public:
    Semester();
    void addCourse(Course* course);
    int getCourseCount() const;
private:
    std::vector<Course*> courses;
};

#endif //SEMESTER_H