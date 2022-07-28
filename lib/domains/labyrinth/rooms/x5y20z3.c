inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 20, 3 }));
  set_short( "Passage - x5y20z3" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y20z3.c",
  "south" : DIR+"/rooms/x5y19z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
