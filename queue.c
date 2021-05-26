#include "queue.h"
struct Node {
	int data;//´¢´æÊı¾İ
	struct Node* left_child;
	struct Node* right_child;
};

void create_que()
{
	start = end = que;
	max = &que[2];
}

void inject(struct Node* node)
{
	*end = node->data;
	if (end != max)
	{
		end++;
	}
	else
	{
		end = que;
	}
}

void eject()
{
	*start = 0;
	if(start!=max)
	{
		start++;
	}
	else
	{
		start = que;
	}

}
