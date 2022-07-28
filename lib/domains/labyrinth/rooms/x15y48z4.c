inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 48, 4 }));
  set_short( "Corridor - x15y48z4" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y48z4.c",
  "north" : DIR+"/rooms/x15y49z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
