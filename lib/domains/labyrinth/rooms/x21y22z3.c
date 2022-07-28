inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 22, 3 }));
  set_short( "Passage - x21y22z3" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y22z3.c",
  "south" : DIR+"/rooms/x21y21z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
