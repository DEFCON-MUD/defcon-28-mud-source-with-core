inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 30, 8 }));
  set_short( "Passage - x51y30z8" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y30z8.c",
  "north" : DIR+"/rooms/x51y31z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
