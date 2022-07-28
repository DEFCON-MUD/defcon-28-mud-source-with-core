inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 46, 5 }));
  set_short( "Passage - x8y46z5" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y46z5.c",
  "east" : DIR+"/rooms/x9y46z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
