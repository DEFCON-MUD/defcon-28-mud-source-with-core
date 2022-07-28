inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 18, 3 }));
  set_short( "Hallway - x39y18z3" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y18z3.c",
  "south" : DIR+"/rooms/x39y17z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
