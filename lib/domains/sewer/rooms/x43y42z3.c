inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 42, 3 }));
  set_short( "Corridor - x43y42z3" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y42z3.c",
  "north" : DIR+"/rooms/x43y43z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crappy sales material in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
