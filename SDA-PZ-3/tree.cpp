#include "tree.h"
#include <stdio.h>
#include <windows.h>

tree *tree::BuildTree()
{
   char *c = new char('0');
   FILE *f = NULL;

   if ( fopen_s( &f, "in.txt", "r" ) )
      perror( "in.txt" ), exit( -1 );
   fscanf_s( f, "%c", c );
   switch ( *c )
   {
      case '(':
         fscanf_s( f, "%c", c );
         tree *t = new tree( *c, BuildTree( ), BuildTree( ) );
         fscanf_s( f, "%c", c );
         return t;
      case ',': return BuildTree( );
      case '0': return NULL;
   }
   fclose( f );
   delete c;
   return 0;
}
