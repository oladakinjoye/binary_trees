#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 *
 *
 * @tree: a pointer to the root node of the tree to measure the balance factor.
 *
 * Return: returns 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lef1 = 0, rig1 = 0;

		lef1 = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rig1 = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return ((lef1 > rig1) ? lef1 : rig1);
	}

	return (0);
}
