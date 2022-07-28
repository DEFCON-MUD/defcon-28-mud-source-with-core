inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 34, 1 }));
  set_short( "Hallway - x29y34z1" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y35z1.c",
  "south" : DIR+"/rooms/x29y33z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
