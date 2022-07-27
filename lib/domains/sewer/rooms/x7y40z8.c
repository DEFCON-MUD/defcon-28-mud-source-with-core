inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 40, 8 }));
  set_short( "Hallway - x7y40z8" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y40z8.c",
  "south" : DIR+"/rooms/x7y39z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
