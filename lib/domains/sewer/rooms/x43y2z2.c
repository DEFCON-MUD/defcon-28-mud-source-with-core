inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 2, 2 }));
  set_short( "Passage - x43y2z2" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y2z2.c",
  "north" : DIR+"/rooms/x43y3z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
