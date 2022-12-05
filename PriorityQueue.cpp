/*******************************************************************/

/* Original File Name: PriorityQueue.cpp                           */

/* Date: 20-10-2022                                                */

/* Developer: Mubaryakov Azamat                                    */

/* Copyright: Brigada №1                                           */

/* Description: Priority Queue Implementation                      */

/*******************************************************************/



//-------------------------------------------------------------------

//#include "ElementLists.h"
//#include "PriorityQueue.h"
#include "Header.h"

//-------------------------------------------------------------------

bool PriorityQueue::empty()
{
    return m_first == nullptr;
}
//-------------------------------------------------------------------

int PriorityQueue::push(int _value, int _prioritet)
{
    if (empty())
    {
        m_first = new ElementLists;
        m_last = m_first;
        m_first->setValue(_value);
        ++m_qualityElements;
        m_first->setNumber(m_qualityElements);
        m_first->setPrioritet(_prioritet);
        return 0;
    }

    for (ElementLists* pointer = m_first; pointer != nullptr; pointer = pointer->next)
    {
        if (pointer->getPrioritet() == _prioritet) return 1;
    }

    if (m_first->getPrioritet() < _prioritet)
    {
        ElementLists* oldFirst = m_first;
        m_first = new ElementLists;
        m_first->next = oldFirst;
        m_first->setValue(_value);
        m_first->setPrioritet(_prioritet);
        ++m_qualityElements;
        //Увелечение порядкого номера всех элементов
        int counterNumber = 0;
        for (ElementLists* pointer = m_first; pointer != nullptr; pointer = pointer->next)
        {
            ++counterNumber;
            pointer->setNumber(counterNumber);
        }
        return 0;
    }

    ElementLists* pointerBefore = m_first;
    for (pointerBefore = m_first; pointerBefore->next != nullptr && pointerBefore->next->getPrioritet() > _prioritet; pointerBefore = pointerBefore->next);

    ElementLists* pointerAfter = pointerBefore->next;
    ElementLists* pointer = new ElementLists;
    pointerBefore->next = pointer;
    pointer->next = pointerAfter;
    pointer->setValue(_value);
    pointer->setNumber(pointerBefore->getNumber() + 1);
    pointer->setPrioritet(_prioritet);
    ++m_qualityElements;
    int counterNumber = pointer->getNumber();
    for (ElementLists* _pointer = pointer->next; _pointer != nullptr; _pointer = _pointer->next)
    {
        ++counterNumber;
        _pointer->setNumber(counterNumber);
    }
    return 0;
}//Вроде готово, как проверишь, обязательно отпишись сюда
//-------------------------------------------------------------------

int PriorityQueue::pop()
{
    int _value = m_first->getValue();
    --m_qualityElements;
    ElementLists* newFirst = m_first->next;
    delete m_first;
    m_first = newFirst;
    return _value;
}
//-------------------------------------------------------------------

void PriorityQueue::output()
{
    if (empty())
    {
        std::cout << "Приоритетная очередь не содержит элементов." << std::endl;
        return;
    }
    std::cout << "Приоритетная очередь содержит: " << std::endl;
    int counter = 1;
    for (ElementLists* pointerEL = m_first; pointerEL != nullptr; pointerEL = pointerEL->next, ++counter)
    {
        pointerEL->output(counter);
    }
}
//-------------------------------------------------------------------