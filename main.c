#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include<assert.h>
#include "bst.h"


int main()
{
Tree bst = tree_new();
Tree *tree = &bst;


tree = add_node(tree,50);
tree = add_node(tree,20);
tree = add_node(tree,30);
tree = add_node(tree,60);
tree = add_node(tree,70);
tree = add_node(tree,35);
tree = add_node(tree,40);

assert(tree->count == 7);

assert(lookup(tree,50)==1);
assert(lookup(tree,90)==0);

tree = delete_node(tree,35);
assert(tree->count == 6);

tree = delete_node(tree,35);



printf("In-order: ");
tree_inorder(tree); //20 30 40 50 60 70
printf("\nPre-order: ");
tree_preorder(tree);
printf("\nPost-order: ");
tree_postorder(tree);
printf("\nlevel-order: ");
tree_levelorder(tree);
printf("\n");


assert(tree_height(tree)==4);


assert(terminal_nodes(tree)==2);
tree = add_node(tree,25);

assert(terminal_nodes(tree)==3);
tree = add_node(tree,55);

assert(terminal_nodes(tree)==4);
tree = add_node(tree,58);
assert(terminal_nodes(tree)==4);



assert(find_min(tree)==20);
assert(find_max(tree)==70);


printf("\n");
printf("Ascending Order: ");
tree_ascending(tree);


printf("\n");
printf("Descending Order: ");
tree_descending(tree); // 70 60 50 40 30 20

return 0 ;

}
