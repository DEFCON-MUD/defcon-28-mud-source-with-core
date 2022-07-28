inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 26, 0 }));
  set_short( "Hallway - x53y26z0" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y26z0.c",
  "north" : DIR+"/rooms/x53y27z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
