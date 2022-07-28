inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 44, 7 }));
  set_short( "Corridor - x27y44z7" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y44z7.c",
  "south" : DIR+"/rooms/x27y43z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
