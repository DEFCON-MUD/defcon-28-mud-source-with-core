inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 2, 0 }));
  set_short( "Hallway - x34y2z0" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y2z0.c",
  "east" : DIR+"/rooms/x35y2z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
