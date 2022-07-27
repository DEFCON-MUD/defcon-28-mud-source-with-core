inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 42, 3 }));
  set_short( "Hallway - x59y42z3" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y42z3.c",
  "north" : DIR+"/rooms/x59y43z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
