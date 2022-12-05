/*******************************************************************/

/* Original File Name: ElementLists.h                              */

/* Date: 20-10-2022                                                */

/* Developer: Mubaryakov Azamat                                    */

/* Copyright: Brigada №1                                           */

/* Description: Elements for priority queues                       */

/*******************************************************************/

#pragma once

//-------------------------------------------------------------------

class ElementLists
{
    int m_value = 0;                                                          //Значение
    int m_number = 0;                                                         //Номер элемента
    int m_prioritet = 0;                                                      //Приоритет элемента
public:
    ElementLists* next = nullptr;
    int getValue();
    int getNumber();
    int getPrioritet();
    void setValue(int _value);
    void setNumber(int _number);
    void setPrioritet(int _prioritet);
    void output(int number);
};

//-------------------------------------------------------------------