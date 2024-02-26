inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 50, 2 }));
  set_short( "Hallway - x1y50z2" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y50z2.c",
  "north" : DIR+"/rooms/x1y51z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
