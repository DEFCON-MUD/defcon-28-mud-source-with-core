inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 32, 2 }));
  set_short( "Corridor - x39y32z2" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y32z2.c",
  "south" : DIR+"/rooms/x39y31z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
