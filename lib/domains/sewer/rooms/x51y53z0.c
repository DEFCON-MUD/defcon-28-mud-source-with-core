inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 53, 0 }));
  set_short( "Passage - x51y53z0" );
set_objects( DIR+"/monsters/maintainer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y54z0.c",
  "south" : DIR+"/rooms/x51y52z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
