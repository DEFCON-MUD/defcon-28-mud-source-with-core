inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 44, 1 }));
  set_short( "Passage - x33y44z1" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y44z1.c",
  "east" : DIR+"/rooms/x34y44z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
