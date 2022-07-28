inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 46, 3 }));
  set_short( "Corridor - x29y46z3" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y47z3.c",
  "south" : DIR+"/rooms/x29y45z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
