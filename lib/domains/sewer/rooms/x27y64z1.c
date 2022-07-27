inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 64, 1 }));
  set_short( "Passage - x27y64z1" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y64z1.c",
  "east" : DIR+"/rooms/x28y64z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
