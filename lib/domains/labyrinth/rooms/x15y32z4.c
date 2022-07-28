inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 32, 4 }));
  set_short( "Hallway - x15y32z4" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y33z4.c",
  "south" : DIR+"/rooms/x15y31z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
