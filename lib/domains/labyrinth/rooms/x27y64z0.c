inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 64, 0 }));
  set_short( "Passage - x27y64z0" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y64z0.c",
  "east" : DIR+"/rooms/x28y64z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
