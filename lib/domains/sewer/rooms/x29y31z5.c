inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 31, 5 }));
  set_short( "Hallway - x29y31z5" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y32z5.c",
  "south" : DIR+"/rooms/x29y30z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
