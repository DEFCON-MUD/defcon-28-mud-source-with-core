inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 6, 8 }));
  set_short( "Hallway - x45y6z8" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y6z8.c",
  "south" : DIR+"/rooms/x45y5z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
