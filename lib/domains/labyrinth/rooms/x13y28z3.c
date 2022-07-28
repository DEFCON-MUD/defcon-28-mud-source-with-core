inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 28, 3 }));
  set_short( "Hallway - x13y28z3" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y28z3.c",
  "east" : DIR+"/rooms/x14y28z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
