inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 2, 7 }));
  set_short( "Corridor - x8y2z7" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y2z7.c",
  "east" : DIR+"/rooms/x9y2z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
