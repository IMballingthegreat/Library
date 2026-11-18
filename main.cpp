#include <iostream>
#include <vector>
#include <vector>
#include "manager.hpp"
int main(){
    Manager manager;
    while(true){
        int choice{};

        std::cout << "LIBRARY SYSTEM/n";
        std::cout << "Enter the options\n";
        std::cout << "LIBRARY SYSTEM\n";
        std::cout << "0. Exit\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. Remove Student\n";
        std::cout << "3. Search Book\n";
        std::cout << "4. Add Book\n";
        std::cout << "5. Borrow Book\n";
        std::cout << "6. Want to Borrow\n";
        if(!(std::cin >> choice)){
            if(std::cin.eof()){
                return 0;
            }

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Enter 0, 1, or 2.\n";
            continue;
        }
        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(), '\n'
        );

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
            break;
            

        }
        case 3:{
            std::string book_name;
            std::string author_name;
            std::cout << "Enter the name of the book:\n";
            std::getline(std::cin,book_name);
            std::cout << "Enter your author_name:\n";
            std::getline(std::cin,author_name);
            if(manager.searchbook(book_name,author_name)){
                std::cout << "Book found\n";

            }else{
                std::cout << "Book not found \n";
            }
            break;

        }
        case 4:{
            std::string book_name;
            std::string author_name;
            std::cout << "Enter the name of the book:\n";
            std::getline(std::cin,book_name);
            std::cout << "Enter your author_name:\n";
            std::getline(std::cin,author_name);
            if(manager.addbook(book_name,author_name)){
                std::cout << "Book added\n";

            }else{
                std::cout << "Book cannot be added \n";
            }
            break;
        }
        case 5:{
            std::string book_name;
            std::string author_name;
            std::cout << "Enter the name of the book:\n";
            std::getline(std::cin,book_name);
            std::cout << "Enter the name of the author name:\n";
            std::getline(std::cin,author_name);
            manager.borrowbook(book_name,author_name);
            break;
            
        }
        case  6:{
            int id;
            std::string first_name;
            std::string last_name;
            std::string book_name;
            std::string author_name;
            std::cout << "Enter your student id:\n";
            std::cin>>id;
            std::cout << "Enter your first_name:\n";
            std::getline(std::cin,first_name);
            std::cout << "Enter your last_name:\n";
            std::getline(std::cin,last_name);
            std::cout<< "Enter the book_name you want to borrow:\n";
            std::getline(std::cin,book_name);
            std::cout << "Enter the author_name of the book you want to borrow:\n";
            std::getline(std::cin,author_name);
            manager.wantborrow(id,first_name,last_name,book_name,author_name);
            break;
        }
           case 0:
            return 0; 
           
        
        default:
            std::cout << "Enter 0, 1,2,3,4,5or 6.\n";
                
            break;
        }
    }
}