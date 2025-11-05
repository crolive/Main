#include "../include/project1.hpp"

// Default Constructor
Project1::Project1() : name("Default"), data() {
    std::cout << "Project1 default constructor called" << std::endl;
}

// Parameterized Constructor
Project1::Project1(const std::string& name) : name(name), data() {
    std::cout << "Project1 constructor called with name: " << name << std::endl;
}

// Destructor
Project1::~Project1() {
    std::cout << "Project1 destructor called" << std::endl;
}

// Getters
std::string Project1::getName() const {
    return name;
}

std::vector<int> Project1::getData() const {
    return data;
}

// Setters
void Project1::setName(const std::string& name) {
    this->name = name;
}

void Project1::addData(int value) {
    data.push_back(value);
}

// Utility methods
void Project1::display() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Data: ";
    for (const auto& value : data) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

void Project1::clear() {
    data.clear();
}
