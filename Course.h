#ifndef COURSE_H
#define COURSE_H

#include <vector>

class Course {
public:
    Course(int id);
    int getId() const;
    void addPrerequisite(Course* course);
    const std::vector<Course*>& getPrerequisites() const;

private:
    int id;
    std::vector<Course*> prerequisites;
};

#endif //COURSE_H