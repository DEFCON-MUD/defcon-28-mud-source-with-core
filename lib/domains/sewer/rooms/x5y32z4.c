inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 32, 4 }));
  set_short( "Corridor - x5y32z4" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y32z4.c",
  "north" : DIR+"/rooms/x5y33z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
