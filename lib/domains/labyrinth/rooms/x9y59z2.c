inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 59, 2 }));
  set_short( "Corridor - x9y59z2" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y60z2.c",
  "south" : DIR+"/rooms/x9y58z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
