inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 20, 3 }));
  set_short( "Passage - x45y20z3" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y20z3.c",
  "south" : DIR+"/rooms/x45y19z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
