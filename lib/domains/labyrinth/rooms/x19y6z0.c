inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 6, 0 }));
  set_short( "Hallway - x19y6z0" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y6z0.c",
  "north" : DIR+"/rooms/x19y7z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
