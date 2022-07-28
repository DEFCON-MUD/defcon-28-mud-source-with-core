inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 52, 8 }));
  set_short( "Passage - x38y52z8" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y52z8.c",
  "east" : DIR+"/rooms/x39y52z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
