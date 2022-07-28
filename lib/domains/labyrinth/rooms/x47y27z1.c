inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 27, 1 }));
  set_short( "Passage - x47y27z1" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y28z1.c",
  "south" : DIR+"/rooms/x47y26z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
