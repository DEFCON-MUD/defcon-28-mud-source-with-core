inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 37, 6 }));
  set_short( "Passage - x3y37z6" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y38z6.c",
  "south" : DIR+"/rooms/x3y36z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
