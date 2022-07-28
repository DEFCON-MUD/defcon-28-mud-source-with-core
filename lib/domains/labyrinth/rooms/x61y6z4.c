inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 6, 4 }));
  set_short( "Passage - x61y6z4" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y6z4.c",
  "north" : DIR+"/rooms/x61y7z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
