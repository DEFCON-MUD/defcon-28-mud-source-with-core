inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 8, 8 }));
  set_short( "Passage - x56y8z8" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y8z8.c",
  "east" : DIR+"/rooms/x57y8z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
