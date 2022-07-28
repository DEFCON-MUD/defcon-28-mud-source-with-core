inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 2, 3 }));
  set_short( "Corridor - x35y2z3" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y2z3.c",
  "east" : DIR+"/rooms/x36y2z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
