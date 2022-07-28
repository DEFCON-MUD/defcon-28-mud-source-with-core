inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 26, 3 }));
  set_short( "Passage - x47y26z3" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y27z3.c",
  "south" : DIR+"/rooms/x47y25z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
