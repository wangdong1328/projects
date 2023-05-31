/**
 * @file student.h
 * @author wangdong (wangdong1328@163.com)
 * @brief 学生信息
 * @version 0.1
 * @date 2023-05-30
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class CStudent
{
public:
    CStudent();
    CStudent(int iStuNumber, std::string strStuName);
    ~CStudent();

    /**
     * @brief Get the Student Number
     *
     * @return int
     */
    int GetNumber() { return m_iStuNumber; };

    /**
     * @brief Get the Student Name
     *
     * @return std::string
     */
    std::string GetStudentName() { return m_strName; };

    /**
     * @brief Set the Student Name
     *
     * @param strName
     */
    void SetStudentName(const std::string &strName) { m_strName = strName; };

    /**
     * @brief Set the Student Number
     *
     * @param iStuNumber
     */
    void SetStudentNumber(const int iStuNumber) { m_iStuNumber = iStuNumber; };

private:
    // 学生姓名
    std::string m_strName;

    // 学生学号
    int m_iStuNumber;
};

#endif // STUDENT_H