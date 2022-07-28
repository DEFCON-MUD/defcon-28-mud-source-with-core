inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 58, 9 }));
  set_short( "Hallway - x26y58z9" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y58z9.c",
  "east" : DIR+"/rooms/x27y58z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
