inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 1, 1 }));
  set_short( "Passage - x39y1z1" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y2z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north.%^RESET%^");
}
