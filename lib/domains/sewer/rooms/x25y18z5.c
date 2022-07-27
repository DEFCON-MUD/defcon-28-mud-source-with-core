inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 18, 5 }));
  set_short( "Corridor - x25y18z5" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y18z5.c",
  "north" : DIR+"/rooms/x25y19z5.c",
  "south" : DIR+"/rooms/x25y17z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
