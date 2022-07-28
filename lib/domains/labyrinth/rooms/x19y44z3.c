inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 44, 3 }));
  set_short( "Corridor - x19y44z3" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y45z3.c",
  "south" : DIR+"/rooms/x19y43z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
