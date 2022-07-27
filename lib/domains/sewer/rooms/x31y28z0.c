inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 28, 0 }));
  set_short( "Passage - x31y28z0" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y28z0.c",
  "south" : DIR+"/rooms/x31y27z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
