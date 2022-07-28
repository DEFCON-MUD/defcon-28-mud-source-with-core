inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 42, 4 }));
  set_short( "Hallway - x34y42z4" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y42z4.c",
  "east" : DIR+"/rooms/x35y42z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
