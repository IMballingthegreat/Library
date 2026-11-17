#ifndef MANAGER_CPP 
#define MANAGER_CPP
#include <vector>
#include "student.hpp"
#include "book.hpp"
#include <unordered_map>
class Manager 
{
    private:
    std::vector<Book>m_books;
    std::unordered_map<int,std::string>mp;
   std::unordered_map<std::string,std::string>m_boorowed_books;
    public:
        bool addstudent(std::string first_name,std::string last_name,int id);
        bool removestudent(std::string first_name,std::string last_name,int id);
        bool searchbook(std::string book_name,std::string author_name);
        bool addbook(std::string book_name,std::string author_name);
        void borrowbook(std::string book_name,std::string);
        void wantborrow(int id,std::string &first_name,std::string &last_name,std::string &book_name,std::string &author_name);



};
#endif