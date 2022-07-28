inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 54, 0 }));
  set_short( "Passage - x39y54z0" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y54z0.c",
  "east" : DIR+"/rooms/x40y54z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
