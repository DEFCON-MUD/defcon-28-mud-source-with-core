inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 31, 3 }));
  set_short( "Corridor - x35y31z3" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y32z3.c",
  "south" : DIR+"/rooms/x35y30z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
