inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 12, 3 }));
  set_short( "Hallway - x27y12z3" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y12z3.c",
  "south" : DIR+"/rooms/x27y11z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
