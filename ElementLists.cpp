/*******************************************************************/

/* Original File Name: ElementLists.cpp                            */

/* Date: 20-10-2022                                                */

/* Developer: Mubaryakov Azamat                                    */

/* Copyright: Brigada №1                                           */

/* Description: Elements for priority queues                       */

/*******************************************************************/



//-------------------------------------------------------------------

//#include "ElementLists.h"
#include "Header.h"

//-------------------------------------------------------------------

int ElementLists::getValue()
{
    return m_value;
}
//-------------------------------------------------------------------

int ElementLists::getNumber()
{
    return m_number;
}
//-------------------------------------------------------------------

int ElementLists::getPrioritet()
{
    return m_prioritet;
}
//-------------------------------------------------------------------

void ElementLists::setValue(int _value)
{
    m_value = _value;
}
//-------------------------------------------------------------------

void ElementLists::setNumber(int _number)
{
    m_number = _number;
}
//-------------------------------------------------------------------

void ElementLists::setPrioritet(int _prioritet)
{
    m_prioritet = _prioritet;
}
//-------------------------------------------------------------------

void ElementLists::output(int number)
{
    std::cout << "Элемент №" << number << std::endl;
    std::cout << "Приоритет элемента: " << m_prioritet << std::endl;
    std::cout << "Значение элемента: " << m_value << std::endl;
}
//-------------------------------------------------------------------