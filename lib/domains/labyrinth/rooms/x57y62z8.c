inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 62, 8 }));
  set_short( "Hallway - x57y62z8" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y62z8.c",
  "south" : DIR+"/rooms/x57y61z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
