/*******************************************************************/

/* Original File Name: Queue.cpp                                   */

/* Date: 20-10-2022                                                */

/* Developer: Mubaryakov Azamat                                    */

/* Copyright: Brigada №1                                           */

/* Description: Queue Implementation                               */

/*******************************************************************/



//-------------------------------------------------------------------

#include "Header.h"

//-------------------------------------------------------------------

bool Queue::empty()
{
    return m_first == nullptr;
}
//-------------------------------------------------------------------

int Queue::push(int _value)
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

int Queue::pop()
{
    int _value = m_first->getValue();
    --m_qualityElements;
    ElementLists* newFirst = m_first->next;
    delete m_first;
    m_first = newFirst;
    return _value;
}
//-------------------------------------------------------------------

void Queue::output()
{
    if (empty())
    {
        std::cout << "Очередь не содержит элементов." << std::endl;
        return;
    }
    std::cout << "Очередь содержит: " << std::endl;
    int counter = 1;
    for (ElementLists* pointerEL = m_first; pointerEL != nullptr; pointerEL = pointerEL->next, ++counter)
    {
        pointerEL->output(counter);
    }
}
//-------------------------------------------------------------------