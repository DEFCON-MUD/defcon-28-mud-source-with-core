inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 0, 0 }));
  set_short( "Corridor - x17y0z0" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y0z0.c",
  "east" : DIR+"/rooms/x18y0z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
