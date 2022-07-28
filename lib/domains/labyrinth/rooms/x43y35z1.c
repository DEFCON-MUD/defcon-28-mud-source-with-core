inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 35, 1 }));
  set_short( "Corridor - x43y35z1" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y36z1.c",
  "south" : DIR+"/rooms/x43y34z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
