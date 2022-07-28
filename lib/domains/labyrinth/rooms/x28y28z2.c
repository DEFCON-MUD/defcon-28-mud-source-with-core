inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 28, 2 }));
  set_short( "Passage - x28y28z2" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y28z2.c",
  "east" : DIR+"/rooms/x29y28z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
