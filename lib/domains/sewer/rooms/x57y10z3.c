inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 10, 3 }));
  set_short( "Hallway - x57y10z3" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y10z3.c",
  "south" : DIR+"/rooms/x57y9z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
