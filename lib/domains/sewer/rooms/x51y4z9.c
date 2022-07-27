inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 4, 9 }));
  set_short( "Hallway - x51y4z9" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y4z9.c",
  "north" : DIR+"/rooms/x51y5z9.c",
  "south" : DIR+"/rooms/x51y3z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the glorzo in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
