inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 2, 3 }));
  set_short( "Hallway - x6y2z3" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y2z3.c",
  "east" : DIR+"/rooms/x7y2z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
