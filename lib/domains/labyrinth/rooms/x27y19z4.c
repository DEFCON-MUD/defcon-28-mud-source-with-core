inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 19, 4 }));
  set_short( "Corridor - x27y19z4" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y20z4.c",
  "south" : DIR+"/rooms/x27y18z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
