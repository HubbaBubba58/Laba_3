/*******************************************************************/

/* Original File Name: LOA_lab_3.cpp                               */

/* Date: 20-10-2022                                                */

/* Developer: Mubaryakov Azamat                                    */

/* Copyright: Brigada №1                                           */

/* Description: The main file managing all modules                 */

/*******************************************************************/

#include "Header.h"

//-------------------------------------------------------------------

//Задание:
//Приоритетная очередь 1                    +
//На основе кода реализовать очередь        +
//На основе кода реализовать стек           +

int PresentationPriorityQueue()
{
    try
    {
        PriorityQueue priorityQueue;
        int value, priority;
        std::cout << "Введите значение элемента: ";
        std::cin >> value;
        std::cout << "Введите приоритет элемента: ";
        std::cin >> priority;
        priorityQueue.push(value, priority);
        priorityQueue.output();
        std::cout << std::endl;
        std::cout << "Введите значение элемента: ";
        std::cin >> value;
        std::cout << "Введите приоритет элемента: ";
        std::cin >> priority;
        priorityQueue.push(value, priority);
        priorityQueue.output();
        std::cout << std::endl;
        std::cout << "Введите значение элемента: ";
        std::cin >> value;
        std::cout << "Введите приоритет элемента: ";
        std::cin >> priority;
        priorityQueue.push(value, priority);
        priorityQueue.output();
        std::cout << std::endl;

        std::cout << "Полученные значения: " << std::endl;
        priorityQueue.pop();
        priorityQueue.output();
        std::cout << std::endl;
        priorityQueue.pop();
        priorityQueue.output();
        std::cout << std::endl;
        priorityQueue.pop();
        priorityQueue.output();
        std::cout << std::endl;
    }
    catch (...)
    {
        std::cerr << "Возникла непредвиденная ошибка. Необходимо запустить средства отладки." << std::endl;
        return 1;
    }
    return 0;
}
//-------------------------------------------------------------------

int PresentationQueue()
{
    try
    {
        Queue queue;
        queue.push(1);
        queue.push(2);
        queue.output();
        std::cout << std::endl;
        queue.pop();
        queue.output();
        std::cout << std::endl;
        queue.pop();
        queue.output();
        std::cout << std::endl;
    }
    catch (...)
    {
        std::cerr << "Возникла непредвиденная ошибка. Необходимо запустить средства отладки." << std::endl;
        return 1;
    }
    return 0;
}
//-------------------------------------------------------------------

int PresentationStack()
{
    try
    {
        Stack stack;
        stack.push(1);
        stack.push(2);
        stack.output();
        std::cout << std::endl;
        stack.pop();
        stack.output();
        std::cout << std::endl;
        stack.pop();
        stack.output();
        std::cout << std::endl;
    }
    catch (...)
    {
        std::cerr << "Возникла непредвиденная ошибка. Необходимо запустить средства отладки." << std::endl;
        return 1;
    }
    return 0;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    PresentationPriorityQueue();
    PresentationQueue();
    PresentationStack();

    return 0;
}
//-------------------------------------------------------------------

/*
    try
    {
        if (1)
        {
            throw std::runtime_error("Something Bad happened here");
        }
    }
    catch (std::exception const& e)
    {
        std::cout << "Exception: " << e.what() << "\n";
    }
*/