#include "tree.h"
#include <stdio.h>
#include <windows.h>

tree *tree::input()
{
   char *c = new char('0');
   FILE *f = NULL;

   if ( fopen_s( &f, "in.txt", "r" ) )
      perror( "in.txt" ), exit( -1 );
   fscanf_s( f, "%c", c );
   switch ( *c )
   {
      case '(':
         tree *t = new tree;
         fscanf_s( f, "%c", c );
   }

   fclose( f );
   delete c;
   return 0;
}
