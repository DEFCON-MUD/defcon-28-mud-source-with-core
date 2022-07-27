inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 56, 7 }));
  set_short( "Passage - x26y56z7" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y56z7.c",
  "east" : DIR+"/rooms/x27y56z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
