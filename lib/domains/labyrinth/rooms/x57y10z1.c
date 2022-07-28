inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 10, 1 }));
  set_short( "Corridor - x57y10z1" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y10z1.c",
  "south" : DIR+"/rooms/x57y9z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
