inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 30, 5 }));
  set_short( "Hallway - x3y30z5" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y30z5.c",
  "south" : DIR+"/rooms/x3y29z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
