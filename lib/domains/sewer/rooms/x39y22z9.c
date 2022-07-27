inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 22, 9 }));
  set_short( "Corridor - x39y22z9" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y22z9.c",
  "south" : DIR+"/rooms/x39y21z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
