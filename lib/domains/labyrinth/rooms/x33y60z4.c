inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 60, 4 }));
  set_short( "Passage - x33y60z4" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y61z4.c",
  "south" : DIR+"/rooms/x33y59z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
