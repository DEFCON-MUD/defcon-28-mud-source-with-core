inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 35, 9 }));
  set_short( "Corridor - x19y35z9" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y36z9.c",
  "south" : DIR+"/rooms/x19y34z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
