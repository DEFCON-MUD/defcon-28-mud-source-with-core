inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 20, 0 }));
  set_short( "Hallway - x24y20z0" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y20z0.c",
  "east" : DIR+"/rooms/x25y20z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
