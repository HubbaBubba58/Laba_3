/*******************************************************************/

/* Original File Name: ElementLists.h                              */

/* Date: 20-10-2022                                                */

/* Developer: Mubaryakov Azamat                                    */

/* Copyright: Brigada �1                                           */

/* Description: Elements for priority queues                       */

/*******************************************************************/

#pragma once

//-------------------------------------------------------------------

class ElementLists
{
    int m_value = 0;                                                          //��������
    int m_number = 0;                                                         //����� ��������
    int m_prioritet = 0;                                                      //��������� ��������
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