inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 16, 1 }));
  set_short( "Hallway - x2y16z1" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y16z1.c",
  "east" : DIR+"/rooms/x3y16z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
