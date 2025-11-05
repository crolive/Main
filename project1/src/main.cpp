#include "../include/project1.hpp"

int main() {
    // Create Project1 object using default constructor
    Project1 proj1;
    proj1.display();

    std::cout << "\n--- Adding data to proj1 ---" << std::endl;
    proj1.addData(10);
    proj1.addData(20);
    proj1.addData(30);
    proj1.display();

    std::cout << "\n--- Creating second Project1 object ---" << std::endl;
    // Create Project1 object with custom name
    Project1 proj2("MyProject");
    proj2.addData(100);
    proj2.addData(200);
    proj2.addData(300);
    proj2.display();

    std::cout << "\n--- Changing name of proj1 ---" << std::endl;
    proj1.setName("UpdatedProject");
    proj1.display();

    std::cout << "\n--- Clearing data from proj2 ---" << std::endl;
    proj2.clear();
    proj2.display();

    std::cout << "\n--- Program ending ---" << std::endl;
    return 0;
}
