inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 62, 7 }));
  set_short( "Passage - x17y62z7" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y62z7.c",
  "east" : DIR+"/rooms/x18y62z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
