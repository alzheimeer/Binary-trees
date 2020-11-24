#include "binary_trees.h"

/**
 *binary_tree_insert_left - insertd node as the left child
 *@parent: pointer to the node to insert left-child
 *@value: value to store in the new node
 *Return: pointer to the created node or NULL if fails or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *aux;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		aux = parent->left;
		newNode->left = aux;
		aux->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);

}
