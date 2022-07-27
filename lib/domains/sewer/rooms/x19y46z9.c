inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 46, 9 }));
  set_short( "Corridor - x19y46z9" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y46z9.c",
  "north" : DIR+"/rooms/x19y47z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
