inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 0, 3 }));
  set_short( "Corridor - x9y0z3" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y0z3.c",
  "east" : DIR+"/rooms/x10y0z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
