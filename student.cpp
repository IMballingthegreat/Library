#include <iostream>
#include <string>
#include "student.hpp"

Student::Student(std::string first_name,std::string last_name,int id):
m_first_name{first_name},m_last_name{last_name},m_id(id)
{

}

std::string Student::getfirst_name()const{
    return m_first_name;
}
std::string Student::getlast_name()const{
    return m_last_name;
}
int Student::getId()const{
    return m_id;
}

void Student::setfirst_name( std::string first_name){
    m_first_name = first_name;
}
void Student::setlast_name(std::string last_name){
    m_last_name = last_name;
}
