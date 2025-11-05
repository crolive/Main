#ifndef PROJECT1_HPP
#define PROJECT1_HPP

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <algorithm>

class Project1 {
private:
    std::string name;
    std::vector<int> data;

public:
    // Constructor
    Project1();
    Project1(const std::string& name);

    // Destructor
    ~Project1();

    // Getters
    std::string getName() const;
    std::vector<int> getData() const;

    // Setters
    void setName(const std::string& name);
    void addData(int value);

    // Utility methods
    void display() const;
    void clear();
};

#endif // PROJECT1_HPP
