inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 58, 8 }));
  set_short( "Hallway - x53y58z8" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y58z8.c",
  "south" : DIR+"/rooms/x53y57z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
