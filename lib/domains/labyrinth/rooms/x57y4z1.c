inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 4, 1 }));
  set_short( "Passage - x57y4z1" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y4z1.c",
  "east" : DIR+"/rooms/x58y4z1.c",
  "north" : DIR+"/rooms/x57y5z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
