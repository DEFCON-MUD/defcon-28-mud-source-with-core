inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 32, 8 }));
  set_short( "Corridor - x19y32z8" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y33z8.c",
  "south" : DIR+"/rooms/x19y31z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
