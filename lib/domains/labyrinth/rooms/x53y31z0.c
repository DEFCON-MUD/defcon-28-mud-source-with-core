inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 31, 0 }));
  set_short( "Hallway - x53y31z0" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y32z0.c",
  "south" : DIR+"/rooms/x53y30z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
