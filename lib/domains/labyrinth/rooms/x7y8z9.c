inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 8, 9 }));
  set_short( "Passage - x7y8z9" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y8z9.c",
  "south" : DIR+"/rooms/x7y7z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
