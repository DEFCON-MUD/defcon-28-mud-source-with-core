inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 61, 1 }));
  set_short( "Hallway - x57y61z1" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y62z1.c",
  "south" : DIR+"/rooms/x57y60z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
