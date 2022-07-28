inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 61, 3 }));
  set_short( "Corridor - x1y61z3" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y62z3.c",
  "south" : DIR+"/rooms/x1y60z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
