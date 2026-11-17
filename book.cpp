#include "book.hpp"
#include "student.hpp"
#include <string>

Book::Book(std::string book_name,std::string author_name):
m_book_name{book_name},m_author_name{author_name}
{

}
std::string Book::getbook_name()const{
    return m_book_name;
}
std::string Book::getauthor_name()const{
    return m_author_name;
}

void Book::setauthor_name(std::string author_name){
    m_author_name = author_name;
}
void Book::setbook_name(std::string book_name){
    m_book_name = book_name;
}



