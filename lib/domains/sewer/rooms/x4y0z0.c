inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 0, 0 }));
  set_short( "Corridor - x4y0z0" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y0z0.c",
  "east" : DIR+"/rooms/x5y0z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
