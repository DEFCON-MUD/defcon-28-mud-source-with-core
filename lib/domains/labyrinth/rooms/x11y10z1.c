inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 10, 1 }));
  set_short( "Corridor - x11y10z1" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y10z1.c",
  "south" : DIR+"/rooms/x11y9z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
