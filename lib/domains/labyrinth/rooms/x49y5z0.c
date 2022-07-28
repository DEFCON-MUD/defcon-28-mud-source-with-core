inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 5, 0 }));
  set_short( "Corridor - x49y5z0" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y6z0.c",
  "south" : DIR+"/rooms/x49y4z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
