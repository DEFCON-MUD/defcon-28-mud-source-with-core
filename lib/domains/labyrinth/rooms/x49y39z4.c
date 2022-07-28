inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 39, 4 }));
  set_short( "Corridor - x49y39z4" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y40z4.c",
  "south" : DIR+"/rooms/x49y38z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
