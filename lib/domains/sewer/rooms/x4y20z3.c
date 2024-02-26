inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 20, 3 }));
  set_short( "Corridor - x4y20z3" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y20z3.c",
  "east" : DIR+"/rooms/x5y20z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
