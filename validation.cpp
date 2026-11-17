#include "validation.hpp"
#include "manager.hpp"
#include <string>
#include <vector>
bool Validation::validatefirst_name(std::string &first_name){
    for(char ch:first_name){
        if(isdigit(ch)){
            return false;
        }
    }
    return true;
}
bool Validation::validatelast_name(std::string &last_name){
    for(char ch:last_name){
        if(isdigit(ch)){
            return false;
        }
    }
    return true;
}
bool Validation::validatebook_name(std::string &book_name){
    for(char ch:book_name){
        if(isdigit(ch)){
            return false;
        }
    }
    return true;
}
bool Validation::validateauthor_name(std::string &author_name){
    for(char ch:author_name){
        if(isdigit(ch)){
            return false;
        }
    }
    return true;
}
bool Validation::validateid(int id){
   
        if(id>100000||id<999999){
            return false;
        }
    
    return true;
}
bool Validation::validate_date(std::string &date){
    if(date.size()!=8&&date[2]!='/'&&date[5]!='/'){
        return false;
    }
    return true;
}
