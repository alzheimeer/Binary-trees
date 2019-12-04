#include "binary_trees.h"

/**
 *binary_tree_is_full - checks if binary tree is full
 *@tree: pointer to the root node of the tree to check
 *Return: tree is NULL, the function must return 0
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	a = binary_tree_is_full(tree->left);
	b = binary_tree_is_full(tree->right);
	return (a && b);
}
