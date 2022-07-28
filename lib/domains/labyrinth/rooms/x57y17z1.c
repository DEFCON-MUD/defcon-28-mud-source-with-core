inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 17, 1 }));
  set_short( "Corridor - x57y17z1" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y18z1.c",
  "south" : DIR+"/rooms/x57y16z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
