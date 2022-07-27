inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 54, 2 }));
  set_short( "Corridor - x19y54z2" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y54z2.c",
  "south" : DIR+"/rooms/x19y53z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
