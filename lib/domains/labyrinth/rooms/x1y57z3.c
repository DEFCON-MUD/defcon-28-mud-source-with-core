inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 57, 3 }));
  set_short( "Hallway - x1y57z3" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y58z3.c",
  "south" : DIR+"/rooms/x1y56z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
