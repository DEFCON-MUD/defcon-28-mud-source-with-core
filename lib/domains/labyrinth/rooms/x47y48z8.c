inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 48, 8 }));
  set_short( "Hallway - x47y48z8" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y49z8.c",
  "south" : DIR+"/rooms/x47y47z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
