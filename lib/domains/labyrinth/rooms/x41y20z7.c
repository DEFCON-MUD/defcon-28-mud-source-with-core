inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 20, 7 }));
  set_short( "Hallway - x41y20z7" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y20z7.c",
  "south" : DIR+"/rooms/x41y19z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
