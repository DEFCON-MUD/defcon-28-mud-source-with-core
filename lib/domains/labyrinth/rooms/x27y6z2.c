inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 6, 2 }));
  set_short( "Passage - x27y6z2" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y7z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north.%^RESET%^");
}
