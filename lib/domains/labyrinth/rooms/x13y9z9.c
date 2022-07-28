inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 9, 9 }));
  set_short( "Hallway - x13y9z9" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y10z9.c",
  "south" : DIR+"/rooms/x13y8z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
