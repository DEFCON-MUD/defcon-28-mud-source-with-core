inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 28, 2 }));
  set_short( "Passage - x41y28z2" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y28z2.c",
  "east" : DIR+"/rooms/x42y28z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
