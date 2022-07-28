inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 17, 1 }));
  set_short( "Passage - x5y17z1" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y18z1.c",
  "south" : DIR+"/rooms/x5y16z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
