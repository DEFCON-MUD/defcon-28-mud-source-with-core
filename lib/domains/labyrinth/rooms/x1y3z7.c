inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 3, 7 }));
  set_short( "Hallway - x1y3z7" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y4z7.c",
  "south" : DIR+"/rooms/x1y2z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
