#pragma once

struct tree
{
   char elem;
   tree *left, *right;

   tree input( );
   void PREORDER( tree *t );
   void INORDER( tree *t );
   void POSTORDER( tree *t );
};