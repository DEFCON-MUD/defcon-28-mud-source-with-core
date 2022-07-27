inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 26, 3 }));
  set_short( "Hallway - x55y26z3" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y26z3.c",
  "north" : DIR+"/rooms/x55y27z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
