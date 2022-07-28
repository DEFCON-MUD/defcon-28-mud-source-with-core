inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 2, 9 }));
  set_short( "Hallway - x49y2z9" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y2z9.c",
  "north" : DIR+"/rooms/x49y3z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
