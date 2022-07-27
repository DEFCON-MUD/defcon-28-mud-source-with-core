inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 38, 0 }));
  set_short( "Passage - x12y38z0" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y38z0.c",
  "east" : DIR+"/rooms/x13y38z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
