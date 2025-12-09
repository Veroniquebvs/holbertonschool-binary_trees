#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - using post-order traversal
 * @tree: pointer to the tree
 * @func: pointer to a function to call for each node
 *
 *Return: Nothing if tree or func is NULL / binary tree
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}

	if (func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
