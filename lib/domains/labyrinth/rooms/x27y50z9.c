inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 50, 9 }));
  set_short( "Corridor - x27y50z9" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y50z9.c",
  "north" : DIR+"/rooms/x27y51z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
