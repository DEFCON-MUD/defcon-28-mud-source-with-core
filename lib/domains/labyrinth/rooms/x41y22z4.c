inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 22, 4 }));
  set_short( "Passage - x41y22z4" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y22z4.c",
  "south" : DIR+"/rooms/x41y21z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
