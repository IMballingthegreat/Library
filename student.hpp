#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>
class Student 
{
    private:
        std::string m_first_name;
        std::string m_last_name;
        int m_id;
    public:
        Student(std::string first_name,std::string last_name,int id);

        int getId()const;
        std::string getfirst_name()const;
        std::string getlast_name()const;

        void setfirst_name(const std::string first_name);
        void setlast_name(const std::string last_name);
        void setid( int id);
        

};
#endif