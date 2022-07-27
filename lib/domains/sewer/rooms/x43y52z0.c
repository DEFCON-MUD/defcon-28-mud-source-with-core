inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 52, 0 }));
  set_short( "Corridor - x43y52z0" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y52z0.c",
  "east" : DIR+"/rooms/x44y52z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
