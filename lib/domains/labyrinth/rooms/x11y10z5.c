inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 10, 5 }));
  set_short( "Corridor - x11y10z5" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y10z5.c",
  "south" : DIR+"/rooms/x11y9z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
