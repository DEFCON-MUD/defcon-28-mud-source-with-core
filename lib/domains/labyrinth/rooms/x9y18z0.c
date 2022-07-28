inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 18, 0 }));
  set_short( "Corridor - x9y18z0" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y18z0.c",
  "east" : DIR+"/rooms/x10y18z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
