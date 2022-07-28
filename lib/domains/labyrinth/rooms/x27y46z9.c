inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 46, 9 }));
  set_short( "Hallway - x27y46z9" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y47z9.c",
  "south" : DIR+"/rooms/x27y45z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
