inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 32, 8 }));
  set_short( "Passage - x33y32z8" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y32z8.c",
  "south" : DIR+"/rooms/x33y31z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
