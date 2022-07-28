inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 14, 9 }));
  set_short( "Hallway - x58y14z9" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y14z9.c",
  "east" : DIR+"/rooms/x59y14z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
