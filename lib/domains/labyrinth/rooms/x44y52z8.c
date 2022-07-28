inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 52, 8 }));
  set_short( "Corridor - x44y52z8" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y52z8.c",
  "east" : DIR+"/rooms/x45y52z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
