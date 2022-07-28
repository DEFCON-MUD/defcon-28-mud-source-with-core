inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 0, 9 }));
  set_short( "Hallway - x3y0z9" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y0z9.c",
  "east" : DIR+"/rooms/x4y0z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
