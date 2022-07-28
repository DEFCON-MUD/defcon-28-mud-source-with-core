inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 19, 5 }));
  set_short( "Hallway - x57y19z5" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y20z5.c",
  "south" : DIR+"/rooms/x57y18z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
