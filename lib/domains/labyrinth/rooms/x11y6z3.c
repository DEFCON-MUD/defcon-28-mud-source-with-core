inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 6, 3 }));
  set_short( "Passage - x11y6z3" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y7z3.c",
  "south" : DIR+"/rooms/x11y5z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
