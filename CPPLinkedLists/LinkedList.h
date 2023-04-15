#include "Node.h"

template <typename T>
class LinkedList
{
private:
	Node<T>* Head;
	Node<T>* Tail;
	int Count = 0;
public:
	void AddFirst(T value)
	{
		if (Head == nullptr)
		{
			Node<T>* newNode = new Node<T>(value, Head);
			Head = newNode;
			Tail = Head;
		}
		else
		{
			Node<T>* nodeToInsert = new Node<T>(value, Head);
			//(*newNode).value = value;
			nodeToInsert->Next = Head;
			Head = nodeToInsert;
		}
		Count++;

	}

	void AddLast(T value)
	{
		Node<T>* newNode = new Node<T>();

		if (Head == nullptr)
		{
			Node<T>* newNode = new Node<T>(value, Head);
			Head = newNode;
			Tail = Head;
		}

		else {
			Node<T>* newNode = new Node<T>(value, Head);
			Tail->Next = newNode;
			Tail = Tail->Next;
		}
		Count++;

	}

	void AddBefore(Node<T> node, T value)
	{

	}

	void AddAfter(Node<T> node, T value)
	{

	}

	bool RemoveFirst()
	{

	}
	bool RemoveLast()
	{

	}

	void Clear()
	{

	}

	bool Contains(T value)
	{

	}

	Node<T> Search(T value)
	{

	}
};
