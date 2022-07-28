inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 21, 6 }));
  set_short( "Hallway - x35y21z6" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y22z6.c",
  "south" : DIR+"/rooms/x35y20z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
