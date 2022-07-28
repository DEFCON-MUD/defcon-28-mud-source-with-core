inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 10, 8 }));
  set_short( "Hallway - x32y10z8" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y10z8.c",
  "east" : DIR+"/rooms/x33y10z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
