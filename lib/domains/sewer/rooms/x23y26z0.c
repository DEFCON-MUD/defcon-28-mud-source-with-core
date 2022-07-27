inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 26, 0 }));
  set_short( "Passage - x23y26z0" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y27z0.c",
  "south" : DIR+"/rooms/x23y25z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
