#include <stdio.h>
#include"queue.h"
struct Node {
	int data;//´¢´æÊý¾Ý
	struct Node* left_child;
	struct Node* right_child;
};

struct Tree {
	struct Node* root;
};

void insert_value(struct Tree *tree,int value)
{
	struct Node* node; struct Node* pre_node;
	node = (struct Node*)malloc(sizeof(struct Node));
	node->data = value;
	node->left_child = NULL;
	node->right_child = NULL;
	pre_node = tree->root;
	while (tree->root!= NULL)
	{
		if (value < pre_node->data)
		{
			if (pre_node->left_child == NULL)
			{
				pre_node->left_child = node;
				return;
			}
			else if (pre_node->left_child != NULL)
			{
				pre_node = pre_node->left_child;
			}

		}
		else if (value >= pre_node->data)
		{
			if (pre_node->right_child == NULL)
			{
				pre_node->right_child = node;
				return;
			}
			else if (pre_node->right_child != NULL)
			{
				pre_node = pre_node->right_child;
			}
		}
	}	
	tree->root = node;
	
}

void Level_order_traversal(struct Node* node)
{
	inject(node);
	while(que!=NULL)
	{
		printf("%d",*end );
		if (node->left_child != NULL)
		{
			inject(node->left_child);
		}
		if (node->right_child != NULL)
		{
			inject(node->right_child);
		}
		eject();
	}
	
}

void Pre_order_traversal(struct Node* node)
{
	if (node != NULL)
	{
		printf("%d ", node->data);
		Pre_order_traversal(node->left_child);
		Pre_order_traversal(node->right_child);
	}
}
void In_order_traversal(struct Node* node)
{
	if (node != NULL)
	{
		Pre_order_traversal(node->left_child);
		printf("%d ", node->data);
		Pre_order_traversal(node->right_child);
	}
}

void post_order_traversal(struct Node* node)
{
	if (node != NULL)
	{
		Pre_order_traversal(node->left_child);
		Pre_order_traversal(node->right_child);
		printf("%d ", node->data);
	}
}

void main()
{
	struct Tree tree;
	tree.root = NULL;
	int n; int value; int i;
	create_que();
	printf("type the number of nodes\n");
	scanf_s("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("type the value of each node\n");
		scanf_s("%d", &value);
		insert_value(&tree, value);
	}
	//Level_order_traversal(tree.root);
}