inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 50, 3 }));
  set_short( "Hallway - x5y50z3" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y50z3.c",
  "east" : DIR+"/rooms/x6y50z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
