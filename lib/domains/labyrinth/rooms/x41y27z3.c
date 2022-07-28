inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 27, 3 }));
  set_short( "Passage - x41y27z3" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y28z3.c",
  "south" : DIR+"/rooms/x41y26z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
