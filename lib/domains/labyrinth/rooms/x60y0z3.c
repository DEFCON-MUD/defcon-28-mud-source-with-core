inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 0, 3 }));
  set_short( "Passage - x60y0z3" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y0z3.c",
  "east" : DIR+"/rooms/x61y0z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
