#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - using preaoder traversal
 * @tree: pointer to the tree
 * @func : pointer to a function to call for each node
 *
 *Return: Nothing if tree or func is NULL / binary tree
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}

	if (func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
