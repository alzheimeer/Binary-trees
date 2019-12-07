#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: return a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *aux;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	aux = tree->right;
	aux->parent = tree->parent;
	tree->parent = aux;
	tree->right = aux->left;
	aux->left = tree;
	return (aux);
}
