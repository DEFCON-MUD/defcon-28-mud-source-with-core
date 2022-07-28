inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 62, 9 }));
  set_short( "Passage - x25y62z9" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y62z9.c",
  "east" : DIR+"/rooms/x26y62z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
