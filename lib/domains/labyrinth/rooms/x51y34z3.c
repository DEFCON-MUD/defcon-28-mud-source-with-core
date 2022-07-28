inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 34, 3 }));
  set_short( "Corridor - x51y34z3" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y34z3.c",
  "east" : DIR+"/rooms/x52y34z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
