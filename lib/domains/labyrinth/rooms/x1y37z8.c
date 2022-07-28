inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 37, 8 }));
  set_short( "Hallway - x1y37z8" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y38z8.c",
  "south" : DIR+"/rooms/x1y36z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
