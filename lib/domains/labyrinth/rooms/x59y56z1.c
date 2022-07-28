inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 56, 1 }));
  set_short( "Passage - x59y56z1" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y56z1.c",
  "north" : DIR+"/rooms/x59y57z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
