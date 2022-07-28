inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 40, 8 }));
  set_short( "Passage - x33y40z8" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y40z8.c",
  "east" : DIR+"/rooms/x34y40z8.c",
  "south" : DIR+"/rooms/x33y39z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
