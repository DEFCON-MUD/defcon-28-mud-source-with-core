inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 7, 6 }));
  set_short( "Passage - x29y7z6" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y8z6.c",
  "south" : DIR+"/rooms/x29y6z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
