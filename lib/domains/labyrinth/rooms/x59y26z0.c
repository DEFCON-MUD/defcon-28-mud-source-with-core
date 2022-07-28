inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 26, 0 }));
  set_short( "Passage - x59y26z0" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y26z0.c",
  "north" : DIR+"/rooms/x59y27z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
