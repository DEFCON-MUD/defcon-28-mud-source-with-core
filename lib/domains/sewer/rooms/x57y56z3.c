inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 56, 3 }));
  set_short( "Hallway - x57y56z3" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y56z3.c",
  "east" : DIR+"/rooms/x58y56z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
