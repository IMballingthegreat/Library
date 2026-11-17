#ifndef VALIDATION_HPP
#define VALIDATION_HPP
#include <string>
class Validation 
{
    public:
    static bool validatefirst_name(std::string &first_name);
    static bool validatelast_name(std::string &last_name);
    static bool validatebook_name(std::string &book_name);
    static bool validateauthor_name(std::string &author_name);
    static bool validateid(int id);
    static bool validate_date(std::string &date);
        
};
#endif