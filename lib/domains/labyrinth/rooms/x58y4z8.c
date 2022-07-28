inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 4, 8 }));
  set_short( "Hallway - x58y4z8" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y4z8.c",
  "east" : DIR+"/rooms/x59y4z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
