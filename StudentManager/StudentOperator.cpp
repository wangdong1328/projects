#include "StudentOperator.h"
#include <iostream>

CStudentOperator::CStudentOperator()
{
}

CStudentOperator::~CStudentOperator()
{
}

void CStudentOperator::AddStudent(int iStNumber, std::string strName)
{
    m_lstStudents.emplace_back(iStNumber, strName);
}

void CStudentOperator::DelStudent(int iStNumber)
{
    for (auto iter = m_lstStudents.begin(); iter != m_lstStudents.end(); ++iter)
    {
        if (iStNumber == iter->GetNumber())
        {
            m_lstStudents.erase(iter);
            break;
        }
    }
}

void CStudentOperator::PrintStudent()
{
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"student number \t  student Name"<<std::endl;
    for (auto && stu : m_lstStudents)
    {
        std::cout<<stu.GetNumber()<<"\t\t"<<stu.GetStudentName()<<std::endl;
    }
    std::cout<<"----------------------------------------"<<std::endl;
}
