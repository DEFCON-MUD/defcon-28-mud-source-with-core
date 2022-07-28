inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 4, 6 }));
  set_short( "Corridor - x61y4z6" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y4z6.c",
  "north" : DIR+"/rooms/x61y5z6.c",
  "south" : DIR+"/rooms/x61y3z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the radioactive waste in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
