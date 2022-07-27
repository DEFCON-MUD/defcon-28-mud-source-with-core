inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 42, 9 }));
  set_short( "Hallway - x9y42z9" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y42z9.c",
  "north" : DIR+"/rooms/x9y43z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
