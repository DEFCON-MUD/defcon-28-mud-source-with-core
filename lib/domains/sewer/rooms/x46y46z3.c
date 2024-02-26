inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 46, 3 }));
  set_short( "Passage - x46y46z3" );
set_objects( DIR+"/monsters/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y46z3.c",
  "east" : DIR+"/rooms/x47y46z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
