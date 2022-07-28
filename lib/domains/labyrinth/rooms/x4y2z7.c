inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 2, 7 }));
  set_short( "Hallway - x4y2z7" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y2z7.c",
  "east" : DIR+"/rooms/x5y2z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
