inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 54, 6 }));
  set_short( "Passage - x55y54z6" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y54z6.c",
  "north" : DIR+"/rooms/x55y55z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
