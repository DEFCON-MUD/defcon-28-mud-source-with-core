inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 64, 4 }));
  set_short( "Corridor - x2y64z4" );
set_objects( DIR+"/monsters/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x3y64z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
