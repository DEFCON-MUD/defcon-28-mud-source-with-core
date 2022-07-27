inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 0, 7 }));
  set_short( "Corridor - x8y0z7" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y0z7.c",
  "east" : DIR+"/rooms/x9y0z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
