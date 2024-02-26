inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 6, 7 }));
  set_short( "Passage - x46y6z7" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y6z7.c",
  "east" : DIR+"/rooms/x47y6z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
