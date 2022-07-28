inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 34, 3 }));
  set_short( "Passage - x1y34z3" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y34z3.c",
  "south" : DIR+"/rooms/x1y33z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
