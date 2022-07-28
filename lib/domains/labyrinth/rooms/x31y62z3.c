inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 62, 3 }));
  set_short( "Passage - x31y62z3" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y62z3.c",
  "south" : DIR+"/rooms/x31y61z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
