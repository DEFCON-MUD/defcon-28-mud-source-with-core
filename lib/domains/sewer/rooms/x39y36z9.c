inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 36, 9 }));
  set_short( "Hallway - x39y36z9" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y36z9.c",
  "north" : DIR+"/rooms/x39y37z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
