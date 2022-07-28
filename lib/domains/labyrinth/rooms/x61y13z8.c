inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 13, 8 }));
  set_short( "Hallway - x61y13z8" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y14z8.c",
  "south" : DIR+"/rooms/x61y12z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
