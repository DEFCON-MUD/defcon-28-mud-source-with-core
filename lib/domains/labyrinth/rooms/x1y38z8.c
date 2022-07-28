inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 38, 8 }));
  set_short( "Passage - x1y38z8" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y38z8.c",
  "south" : DIR+"/rooms/x1y37z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
