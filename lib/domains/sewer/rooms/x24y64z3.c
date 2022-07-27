inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 64, 3 }));
  set_short( "Passage - x24y64z3" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y64z3.c",
  "east" : DIR+"/rooms/x25y64z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
