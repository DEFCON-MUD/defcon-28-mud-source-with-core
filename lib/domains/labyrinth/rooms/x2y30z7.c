inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 30, 7 }));
  set_short( "Corridor - x2y30z7" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y30z7.c",
  "east" : DIR+"/rooms/x3y30z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
