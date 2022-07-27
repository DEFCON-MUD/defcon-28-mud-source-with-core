inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 22, 8 }));
  set_short( "Hallway - x37y22z8" );
set_objects( DIR+"/monsters/raddgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y22z8.c",
  "north" : DIR+"/rooms/x37y23z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
