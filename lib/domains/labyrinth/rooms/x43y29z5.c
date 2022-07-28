inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 29, 5 }));
  set_short( "Corridor - x43y29z5" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y30z5.c",
  "south" : DIR+"/rooms/x43y28z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
