inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 4, 7 }));
  set_short( "Passage - x59y4z7" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y4z7.c",
  "north" : DIR+"/rooms/x59y5z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
