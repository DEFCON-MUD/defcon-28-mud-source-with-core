inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 4, 5 }));
  set_short( "Hallway - x18y4z5" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y4z5.c",
  "east" : DIR+"/rooms/x19y4z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
