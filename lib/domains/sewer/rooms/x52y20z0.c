inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 20, 0 }));
  set_short( "Hallway - x52y20z0" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y20z0.c",
  "east" : DIR+"/rooms/x53y20z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
