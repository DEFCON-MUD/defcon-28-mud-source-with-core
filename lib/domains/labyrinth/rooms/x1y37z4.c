inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 37, 4 }));
  set_short( "Passage - x1y37z4" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y38z4.c",
  "south" : DIR+"/rooms/x1y36z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
