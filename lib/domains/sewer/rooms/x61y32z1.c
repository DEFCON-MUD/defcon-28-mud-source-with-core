inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 32, 1 }));
  set_short( "Hallway - x61y32z1" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y32z1.c",
  "south" : DIR+"/rooms/x61y31z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
