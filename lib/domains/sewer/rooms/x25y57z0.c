inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 57, 0 }));
  set_short( "Hallway - x25y57z0" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y58z0.c",
  "south" : DIR+"/rooms/x25y56z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
