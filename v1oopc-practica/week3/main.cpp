#include <stdio.h>
#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"

int main(){
   window w( 128, 64, 2 );
   bal b( w, vector( 10, 10 ), 8, vector( 2, 2 ));
   line top( . . . );
   line right( . . . );
   line bottom( . . . );
   line left( . . . );
   drawable * objects[] = { &b, &top, &left, &right, &bottom };

   for(;;){
      w.clear();
      for( auto p & : objects ){
         p->draw();
      }
      wait_ms( 100 );
      for( auto p & : objects ){
          p->update();
      }
   }
}

