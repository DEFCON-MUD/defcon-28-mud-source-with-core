inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 0, 3 }));
  set_short( "Hallway - x40y0z3" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y0z3.c",
  "east" : DIR+"/rooms/x41y0z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
