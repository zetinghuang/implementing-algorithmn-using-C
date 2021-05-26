/*采用队列的数据结构实现树的层序遍历，队列设置为环形，即当尾指针指向第二个字节时，再加一就会恢复为第0个字节，这样能防止数据指针不断自增导致指针指向溢出。*/
#include "queue.h"
struct Node {
	int data;//´¢´æÊý¾Ý
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
