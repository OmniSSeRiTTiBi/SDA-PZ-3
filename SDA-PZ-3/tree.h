#pragma once

#include <windows.h>

struct tree
{
   char elem;
   tree *left, *right;
   tree( char _elem = '0', tree *_left = NULL, tree *_right = NULL ) :
      elem( _elem ), left( _left ), right( _right ) { };

   tree *BuildTree( );
   void PREORDER( tree *t );
   void INORDER( tree *t );
   void POSTORDER( tree *t );
};