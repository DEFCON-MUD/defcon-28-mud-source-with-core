inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 31, 1 }));
  set_short( "Hallway - x55y31z1" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y32z1.c",
  "south" : DIR+"/rooms/x55y30z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
