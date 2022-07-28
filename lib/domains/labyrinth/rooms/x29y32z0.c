inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 32, 0 }));
  set_short( "Hallway - x29y32z0" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y33z0.c",
  "south" : DIR+"/rooms/x29y31z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
