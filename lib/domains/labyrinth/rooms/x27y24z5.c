inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 24, 5 }));
  set_short( "Hallway - x27y24z5" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y25z5.c",
  "south" : DIR+"/rooms/x27y23z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
