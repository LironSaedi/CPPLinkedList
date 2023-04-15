#pragma once

template <typename T>
class Node
{

	

public:
	T value;
	Node<T>* Next;

	Node(T value, Node<T>* Next)
	{
		this->value = value;
		this->Next = Next;
	}

	~Node()
	{
	delete Next;
	}
};