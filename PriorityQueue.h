/*******************************************************************/

/* Original File Name: PriorityQueue.cpp                           */

/* Date: 20-10-2022                                                */

/* Developer: Mubaryakov Azamat                                    */

/* Copyright: Brigada ¹1                                           */

/* Description: Priority Queue Implementation                      */

/*******************************************************************/

#pragma once

//-------------------------------------------------------------------

class PriorityQueue
{
    ElementLists* m_first = nullptr;
    ElementLists* m_last = nullptr;
    int m_qualityElements = 0;
public:
    bool empty();
    int push(int _value, int _prioritet);
    int pop();
    void output();
};

//-------------------------------------------------------------------