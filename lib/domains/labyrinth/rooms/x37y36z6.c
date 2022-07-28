inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 36, 6 }));
  set_short( "Hallway - x37y36z6" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y36z6.c",
  "north" : DIR+"/rooms/x37y37z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
