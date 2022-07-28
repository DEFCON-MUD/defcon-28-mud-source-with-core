inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 11, 6 }));
  set_short( "Passage - x57y11z6" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y12z6.c",
  "south" : DIR+"/rooms/x57y10z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
