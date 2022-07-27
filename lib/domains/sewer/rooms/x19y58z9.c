inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 58, 9 }));
  set_short( "Corridor - x19y58z9" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y58z9.c",
  "north" : DIR+"/rooms/x19y59z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
