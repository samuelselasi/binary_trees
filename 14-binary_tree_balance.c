#include "binary_trees.h"

/**
 * binary_tree_balance - Function that measures the balance factor of a b-tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: Balance factor, 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) -
				binary_tree_height(tree->right));

	return (0);
}
