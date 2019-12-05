#include "binary_trees.h"

/**
 *binary_tree_sibling - finds the sibling of a node
 *@node: is a pointer to the node to find the sibling
 *Return: Your function must return a pointer to the sibling node
 *        If node is NULL, return NULL
 *        If node has no sibling, return NULL
 **/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int a, b;
	binary_tree_t *sibling;

	if (!node || !node->parent)
		return (NULL);

	a = node->parent->right->n;
	b = node->parent->left->n;

	if (b && a)
	{
		if (b == node->n)
			sibling = node->parent->right;
		if (a == node->n)
			sibling = node->parent->left;
	}
	return (sibling);

}
