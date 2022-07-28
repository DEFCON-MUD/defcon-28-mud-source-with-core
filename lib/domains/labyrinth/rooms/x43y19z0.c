inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 19, 0 }));
  set_short( "Passage - x43y19z0" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y20z0.c",
  "south" : DIR+"/rooms/x43y18z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
