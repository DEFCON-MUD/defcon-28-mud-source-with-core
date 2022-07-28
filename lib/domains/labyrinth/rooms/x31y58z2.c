inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 58, 2 }));
  set_short( "Hallway - x31y58z2" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y59z2.c",
  "south" : DIR+"/rooms/x31y57z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
