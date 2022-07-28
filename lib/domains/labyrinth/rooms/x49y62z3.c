inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 62, 3 }));
  set_short( "Corridor - x49y62z3" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y62z3.c",
  "east" : DIR+"/rooms/x50y62z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
