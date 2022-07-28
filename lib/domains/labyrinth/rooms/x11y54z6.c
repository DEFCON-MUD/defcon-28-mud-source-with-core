inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 54, 6 }));
  set_short( "Hallway - x11y54z6" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y54z6.c",
  "north" : DIR+"/rooms/x11y55z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
