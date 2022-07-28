inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 16, 4 }));
  set_short( "Corridor - x37y16z4" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y16z4.c",
  "north" : DIR+"/rooms/x37y17z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
