inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 28, 9 }));
  set_short( "Passage - x55y28z9" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y28z9.c",
  "east" : DIR+"/rooms/x56y28z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
