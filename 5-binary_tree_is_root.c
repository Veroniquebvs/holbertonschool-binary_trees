#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is the root of a binary tree
 * @node: pointer to the node to check
 *
 * Description: Returns 1 if the given node has no parent, meaning it is
 * the root of the tree. Returns 0 if the node has a parent or if the node
 * pointer is NULL.
 *
 * Return: 1 if @node is the root, 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent)
		return (0);

	return (1);
}
