inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 33, 5 }));
  set_short( "Passage - x7y33z5" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y34z5.c",
  "south" : DIR+"/rooms/x7y32z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
