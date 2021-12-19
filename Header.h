struct Node 
{
	int a;
	Node* prev;
	Node* next;
};

class Queue
{
public:
	Queue();
	Queue(int);
	Queue& operator=(Queue&&);
	int GetSize() const;
	bool Push(const int);
	bool Pop(int&);
	bool HasElements() const;
	bool Peek(int&);
private:
	Node* next;
};