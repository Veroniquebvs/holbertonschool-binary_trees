#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 *Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree node
 * @tree: pointer to the node to measure
 *
 * Description: The balance factor of a node is the difference between the
 * height of the left subtree and the height of the right subtree. A positive
 * value means left-heavy, negative means right-heavy, 0 means balanced.
 * Returns 0 if the node is NULL.
 *
 * Return: Balance factor of the node
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
