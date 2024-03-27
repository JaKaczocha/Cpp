#pragma once

#include <string>

typedef int Data;

struct Element
{
	Element* prev = 0;
	Element* next = 0;
	Data data = 0;
};

class List
{
public:
	~List();
	void addFront(Data& data);
	void addBack(Data& data);
	void addBeforCurrent(Data& data);
	void addAfterCurrent(Data& data);
	
	void popFront();
	void popBack();
	void pop();
	
	void next();
	void previous();
	bool isEmpty();
	int getSize();
	Data getData();

private:
	Element* currentElement = 0;
	int size = 0;
	Element* head = 0;
	Element* tail = 0;
};

