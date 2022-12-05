/*******************************************************************/

/* Original File Name: Stack.cpp                                   */

/* Date: 20-10-2022                                                */

/* Developer: Mubaryakov Azamat                                    */

/* Copyright: Brigada №1                                           */

/* Description: Stack Implementation                               */

/*******************************************************************/



//-------------------------------------------------------------------

#include "Header.h"

//-------------------------------------------------------------------

bool Stack::empty()
{
    return m_first == nullptr;
}
//-------------------------------------------------------------------

int Stack::push(int _value)
{
    if (empty())
    {
        m_first = new ElementLists;
        m_last = m_first;
        m_first->setValue(_value);
        ++m_qualityElements;
        m_first->setNumber(m_qualityElements);
        m_first->setPrioritet(0);
        return 0;
    }
    ++m_qualityElements;
    m_last->next = new ElementLists;
    m_last = m_last->next;
    m_last->setNumber(m_qualityElements);
    m_last->setPrioritet(0);
    m_last->setValue(_value);
    return 0;
}
//-------------------------------------------------------------------

int Stack::pop()
{
    if (empty())return -0; //maybe using throw?)
    int _value = m_last->getValue();
    if (m_qualityElements == 1)
    {
        --m_qualityElements;
        delete m_first;
        m_first = nullptr;
        m_last = nullptr;
        return _value;
    }
    --m_qualityElements;
    ElementLists* newLast = m_first;
    for (; newLast->next != m_last; newLast = newLast->next);
    delete m_last;
    m_last = newLast;
    m_last->next = nullptr;
    return _value;
}
//-------------------------------------------------------------------

void Stack::output()
{
    if (empty())
    {
        std::cout << "Стек не содержит элементов." << std::endl;
        return;
    }
    std::cout << "Стек содержит: " << std::endl;
    int counter = 1;
    for (ElementLists* pointerEL = m_first; pointerEL != nullptr; pointerEL = pointerEL->next, ++counter)
    {
        pointerEL->output(counter);
    }
}
//-------------------------------------------------------------------