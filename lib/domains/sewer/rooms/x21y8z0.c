inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 8, 0 }));
  set_short( "Passage - x21y8z0" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y8z0.c",
  "north" : DIR+"/rooms/x21y9z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
