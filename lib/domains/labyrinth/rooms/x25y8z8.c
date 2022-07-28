inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 8, 8 }));
  set_short( "Passage - x25y8z8" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y8z8.c",
  "south" : DIR+"/rooms/x25y7z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
