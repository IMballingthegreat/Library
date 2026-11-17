#include <iostream>
#include <vector>
#include <vector>
#include "manager.hpp"
int main(){
    Manager manager;
    for(0uz;;){
        int choice{};

        std::cout << "LIBRARY SYSTEM/n";
        std::cout << "Enter the options\n";
        std::cout << "1.Add Student\n2.Remove student\n 3.Search book\n 4.Add Book\n 5. Borrow Book \n 6.want to borrow";
        if(!std::cin >> choice){
            if(std::cin.eof()){
                return 0;
            }

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Enter 0, 1, or 2.\n";
            continue;
        }

        switch (choice)
        {
        case 1:{
            std::string first_name;
            std::string last_name;
            int id;
            std::cout << "Enter the first name: \n";
            std::getline(std::cin,first_name);
            std::cout << "Enter the last name: \n";

            std::getline(std::cin,last_name);
            std::cout << "Enter the student id:\n";
            std::cin >>id;
            if(manager.addstudent(first_name,last_name,id)){
                std::cout << "Student added\n";
            }else{
                std::cout << "Student can't be found\n";
            }
            break;

        }
        case 2:{
           std::string first_name;
            std::string last_name;
            int id;
            std::cout << "Enter the first name: \n";
            std::getline(std::cin,first_name);
            std::cout << "Enter the last name: \n";

            std::getline(std::cin,last_name);
            std::cout << "Enter the student id:\n";
            std::cin >>id; 

            if(manager.removestudent( first_name,last_name,id)){
                std::cout << "Student Removed\n";

            }else{
                std::cout << "Student can't be removed\n";
            }
            

        }
        case 3:{
            
        }
            
           
        
        default:
            break;
        }
    }
}