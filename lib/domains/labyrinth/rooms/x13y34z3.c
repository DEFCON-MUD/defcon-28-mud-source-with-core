inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 34, 3 }));
  set_short( "Corridor - x13y34z3" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y34z3.c",
  "south" : DIR+"/rooms/x13y33z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
