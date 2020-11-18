#include "node.hpp"
#include <iostream>

ListOfNumbers::ListOfNumbers()
{
    number = 0;
	next = NULL;
}

ListOfNumbers::ListOfNumbers(int v)
{
    next = NULL;
    number = v;
}

void ListOfNumbers::SetValue(int v)
{
    number = v;
}

void ListOfNumbers::SetNext(ListOfNumbers *n)
{
    next = n;
}

void ListOfNumbers::PrintItem()
{
    std::cout << number << std::endl;
}

void ListOfNumbers::PrintList()
{
    ListOfNumbers *tmp;
    tmp = this;
    while (tmp->next)
    {
        tmp->PrintItem();
        tmp = tmp -> next;
    }
    tmp->PrintItem();
}

void ListOfNumbers::Add(int v)
{
    ListOfNumbers *tmp;
    tmp = this;
    while (tmp->next)
    {
        tmp = tmp -> next;
    }
    tmp->SetNext(new ListOfNumbers(v));
}

void ListOfNumbers::AddR (int v)
{
    if (this->next)
        this->next->AddR(v);
    else
        this->SetNext(new ListOfNumbers(v));
}

ListOfNumbers * ListOfNumbers::find (int Value)
{
    ListOfNumbers *tmp;
    tmp = this;
    bool found = false;
    while (tmp->next)
    {
        if(tmp -> number == Value)
        {
            found = true;
            break;
        }
        tmp = tmp -> next;
    }
    if(found)
        return tmp;
    else 
        return NULL;
}

ListOfNumbers * ListOfNumbers::findR (int v)
{
    if(this->number == v)
        return this;
    else 
    {
        if(this->next)
            this->next->findR(v);
        else
            return NULL;
    }
}

ListOfNumbers * ListOfNumbers::Remove (int v)
{
    ListOfNumbers *tmp;
    ListOfNumbers *head = this;
    tmp = this;
    if(this -> number == v)
    {
        tmp = this -> next;
        this -> next = NULL;
        return tmp;
    }
    bool found = false;
    while (tmp->next)
    {
        if(tmp -> next -> number == v)
        {
            found = true;
            break;
        }
        tmp = tmp -> next;
    }
    if(found)
    {
        tmp -> next = tmp -> next -> next;
       // tmp -> next -> next = NULL;
        return (head);
    }
    else 
        return NULL;
}

ListOfNumbers::~ListOfNumbers()
{
    
}
