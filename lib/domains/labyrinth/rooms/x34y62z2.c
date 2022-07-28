inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 62, 2 }));
  set_short( "Hallway - x34y62z2" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y62z2.c",
  "east" : DIR+"/rooms/x35y62z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
