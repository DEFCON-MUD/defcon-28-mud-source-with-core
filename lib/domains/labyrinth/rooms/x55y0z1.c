inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 0, 1 }));
  set_short( "Hallway - x55y0z1" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y0z1.c",
  "east" : DIR+"/rooms/x56y0z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
