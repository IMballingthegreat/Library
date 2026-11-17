#ifndef BOOK_HPP
#define BOOK_HPP
#include <string>
#include <vector>
#include "validation.hpp"

class Book 
{
    private:
        std::string m_book_name;
        std::string m_author_name;
        
    public:
        Book(std::string book_name,std::string author_name);
    
    std::string getbook_name()const;
    std::string getauthor_name()const;

    void setbook_name(std::string book_name);
    void setauthor_name(std::string author_name);

};
#endif