#include "binary_trees.h"
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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 *
 * A perfect binary tree is a type of binary tree in which every internal
 * node has exactly two children and all leaf nodes are at the same level.
 * Returns 0 if the tree is NULL.
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height_left = 0;
    size_t height_right = 0;

    if (tree == NULL)
        return (0);

    height_left = binary_tree_height(tree->left);
    height_right = binary_tree_height(tree->right);

    if (height_left != height_right)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    return (binary_tree_is_perfect(tree->left) && 
            binary_tree_is_perfect(tree->right));
}
