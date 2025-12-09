#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes in a binary tree with
 * at least one child
 * @tree: pointer to the root node of the tree to count
 *
 * Description: Recursively counts all nodes in the binary tree that have
 * at least one child (non-leaf nodes). Returns 0 if the tree is NULL
 * or if the node is a leaf.
 *
 * Return: The number of nodes with at least one child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (tree == NULL)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (1 + left_nodes + right_nodes);

	return (0);
}
