inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 42, 0 }));
  set_short( "Passage - x45y42z0" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y42z0.c",
  "south" : DIR+"/rooms/x45y41z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
