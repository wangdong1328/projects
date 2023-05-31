/**
 * @file main.cpp
 * @author wangdong (wangdong1328@163.com)
 * @brief  程序入口
 * @version 0.1
 * @date 2023-05-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include "StudentOperator.h"

int main(int argc, char* argv[])
{
    CStudentOperator clsStudentOperator;
    clsStudentOperator.AddStudent(1, "wang");
    clsStudentOperator.AddStudent(2, "dong");

    clsStudentOperator.PrintStudent();

    clsStudentOperator.DelStudent(1);
    clsStudentOperator.PrintStudent();


    return 0;
}