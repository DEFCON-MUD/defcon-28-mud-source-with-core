inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 33, 9 }));
  set_short( "Hallway - x11y33z9" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y34z9.c",
  "south" : DIR+"/rooms/x11y32z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
