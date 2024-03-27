#include "List.h"

List::~List()
{
	while (!isEmpty())
	{
		popBack();
	}
}
void List::addFront(Data& data)
{
	Element *element = new Element();
	element->data = data;
	if (size == 0)
	{
		head = element;
		tail = element;
		size++;
		return;
	}
	head->prev = element;
	element->prev = 0;
	element->next = head;
	head = element;
	size++;
}
void List::addBack(Data& data)
{
	Element* element = new Element();
	element->data = data;
	if (size == 0)
	{
		head = element;
		tail = element;
		size++;
		return;
	}
	tail->next = element;
	element->prev = tail;
	element->next = 0;
	tail = element;
	size++;
}
void List::addBeforCurrent(Data& data)
{
	Element* element = new Element();
	element->data = data;
	if (size == 0)
	{
		head = element;
		tail = element;
		return;
	}
	if (currentElement == 0)
	{
		currentElement = head;
	}
	
	if (currentElement == head)
	{
		delete element;
		addFront(data);
	}
	else
	{
		(currentElement->prev)->next = element;
		currentElement->prev = element;
		size++;
	}

	
}
void List::addAfterCurrent(Data& data)
{
	Element* element = new Element();
	element->data = data;
	if (size == 0)
	{
		head = element;
		tail = element;
		return;
	}
	if (currentElement == 0)
	{
		currentElement = head;
	}

	if (currentElement == tail)
	{
		delete element;
		addBack(data);
	}
	else
	{
		(currentElement->prev)->next = element;
		currentElement->prev = element;
		size++;
	}
}

void List::popFront()
{
	
	if (size == 1)
	{
		tail = 0;
		head = 0;
		size--;
	}
	else if (size > 1)
	{
		head = head->next;
		if (head != nullptr && head->next != nullptr)
		delete head->prev;
		size--;
	}
	
}
void List::popBack()
{
	
	if (size == 1)
	{
		tail = 0;
		head = 0;
		size--;
	}
	else if (size > 1)
	{
		tail = tail->prev;
		if(tail != nullptr && tail->next != nullptr)
			delete tail->next;
		size--;
	}
}
void List::pop()
{
	(currentElement->next)->prev = currentElement->prev;
	(currentElement->prev)->next = currentElement->next;

	Element* Tmp = currentElement;
	delete currentElement;
	currentElement = Tmp->prev;

	size--;
	
}
void List::next()
{
	if (currentElement == 0)
	{
		currentElement = head;
	}
	if (currentElement == tail)
	{
		return;
	}
	currentElement = currentElement->next;
}
void List::previous()
{
	if (currentElement == 0 )
	{
		currentElement = head;
	}
	if (currentElement == head)
	{
		return;
	}

	currentElement = currentElement->prev;
}
bool List::isEmpty()
{
	return size == 0 ? true : false;
}
Data List::getData()
{
	if (currentElement == 0)
	{
		currentElement = head;
	}
	
	return currentElement->data;
	
}
int List::getSize()
{
	return size;
}