/**
 * @file StudentOperator.h
 * @author wangdong (wangdong1328@163.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef STUDENTOPERATOR_H
#define STUDENTOPERATOR_H
#include <list>
#include "Student.h"

class CStudentOperator
{
public:
    CStudentOperator();
    ~CStudentOperator();

    /**
     * @brief 添加学生
     * 
     * @param iStNumber 学生学号
     * @param strName   学生名字
     */
    void AddStudent(int iStNumber, std::string strName);

    /**
     * @brief 删除学生
     * 
     * @param iStNumber 学生学号
     */
    void DelStudent(int iStNumber);

    /**
     * @brief 打印学生信息
     * 
     */
    void PrintStudent();

private:
    std::list<CStudent> m_lstStudents;
};

#endif //STUDENTOPERATOR_H