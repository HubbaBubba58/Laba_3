/*******************************************************************/

/* Original File Name: Queue.cpp                                   */

/* Date: 20-10-2022                                                */

/* Developer: Mubaryakov Azamat                                    */

/* Copyright: Brigada ¹1                                           */

/* Description: Standart queue                                     */

/*******************************************************************/



//-------------------------------------------------------------------

#pragma once

//-------------------------------------------------------------------

class Queue
{
    ElementLists* m_first = nullptr;
    ElementLists* m_last = nullptr;
    int m_qualityElements = 0;
public:
    bool empty();
    int push(int _value);
    int pop();
    void output();
};

//-------------------------------------------------------------------