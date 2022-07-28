inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 34, 4 }));
  set_short( "Passage - x57y34z4" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y34z4.c",
  "north" : DIR+"/rooms/x57y35z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
