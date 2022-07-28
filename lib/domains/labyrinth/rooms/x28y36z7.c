inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 36, 7 }));
  set_short( "Passage - x28y36z7" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y36z7.c",
  "east" : DIR+"/rooms/x29y36z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
