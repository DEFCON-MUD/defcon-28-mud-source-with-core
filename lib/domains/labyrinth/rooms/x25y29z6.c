inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 29, 6 }));
  set_short( "Corridor - x25y29z6" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y30z6.c",
  "south" : DIR+"/rooms/x25y28z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
