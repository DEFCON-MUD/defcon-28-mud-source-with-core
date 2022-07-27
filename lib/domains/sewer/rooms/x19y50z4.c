inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 50, 4 }));
  set_short( "Passage - x19y50z4" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y50z4.c",
  "north" : DIR+"/rooms/x19y51z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
