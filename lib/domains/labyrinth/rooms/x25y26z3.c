inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 26, 3 }));
  set_short( "Corridor - x25y26z3" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y26z3.c",
  "north" : DIR+"/rooms/x25y27z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
