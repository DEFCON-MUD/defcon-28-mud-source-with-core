inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 4, 0 }));
  set_short( "Corridor - x18y4z0" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y4z0.c",
  "east" : DIR+"/rooms/x19y4z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
