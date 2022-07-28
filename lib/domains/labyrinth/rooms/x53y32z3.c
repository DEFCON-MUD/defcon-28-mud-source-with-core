inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 32, 3 }));
  set_short( "Hallway - x53y32z3" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y32z3.c",
  "south" : DIR+"/rooms/x53y31z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
