inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 60, 2 }));
  set_short( "Passage - x11y60z2" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y61z2.c",
  "south" : DIR+"/rooms/x11y59z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
