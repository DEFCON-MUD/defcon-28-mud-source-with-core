inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 3, 7 }));
  set_short( "Hallway - x41y3z7" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y4z7.c",
  "south" : DIR+"/rooms/x41y2z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
