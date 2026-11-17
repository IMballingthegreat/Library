#include "manager.hpp"
#include <string>
#include "validation.hpp"
#include <iostream>
#include <vector>
#include "book.hpp"
#include <chrono>
#include <format>

bool Manager::addstudent(std::string first_name,std::string last_name,int id){
    if(!Validation::validatefirst_name(first_name)){
        return false;
    }
    if(!Validation::validatelast_name(last_name)){
        return false;
    }
    if(!Validation::validateid(id)){
        return false;
    }
    mp.insert({id,first_name+" "+last_name});
}
bool Manager::removestudent(std::string first_name,std::string last_name,int id){
    auto it = mp.find(id);
    if(it==mp.end()){
        return false;
    }
    if(it->second!=first_name + " " + last_name){
        return false;
    }
    mp.erase(it);
    return true;
}

bool Manager::searchbook(std::string book_name,std::string author_name){
    if(!Validation::validatebook_name(book_name)&&!Validation::validateauthor_name(author_name)){
        return false;
    }
    for(const Book &book:m_books){
        if(book.getbook_name()!=book_name&&book.getauthor_name()!=author_name){
            std::cout << "Book not found";
            return false;
        }
    }
    std::cout << "Book found!";
    return true;
}
bool Manager::addbook(std::string book_name,std::string author_name){
    if(!Validation::validatebook_name(book_name)&&!Validation::validateauthor_name(author_name)){
        return false;
    }
    m_books.emplace_back(book_name,author_name);

}
void Manager::borrowbook(std::string book_name,std::string author_name){
    for(const Book&book:m_books){
        if(book.getbook_name()==book_name&&book.getauthor_name()==author_name){
            std::cout << "Book available\n";
            std::cout << "Book Borrowes\n";
        }
    }
    

    m_boorowed_books.insert({book_name,author_name});
}

void Manager::wantborrow(int id,std::string &first_name,std::string &last_name,std::string &book_name,std::string &author_name){
    if(!Validation::validatefirst_name(first_name)||!Validation::validatelast_name(last_name)||!Validation::validateid(id)||!Validation::validatebook_name(book_name)||!Validation::validateauthor_name(author_name)){
        std::cout <<"Invalide Details'\n";
        return;
    }
    for(const Book&book:m_books){
        if(book.getbook_name()==book_name && book.getauthor_name()==author_name){
            std::cout << "Book Available";
            return ;
        }else
        {
            std::cerr<<"Book is not available\n for borrow";
        }
    }
    
    



}



