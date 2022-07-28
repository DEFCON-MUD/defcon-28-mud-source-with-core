inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 33, 6 }));
  set_short( "Hallway - x59y33z6" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y34z6.c",
  "south" : DIR+"/rooms/x59y32z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
