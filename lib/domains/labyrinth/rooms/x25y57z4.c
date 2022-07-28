inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 57, 4 }));
  set_short( "Hallway - x25y57z4" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y58z4.c",
  "south" : DIR+"/rooms/x25y56z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
