inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 28, 6 }));
  set_short( "Passage - x5y28z6" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y28z6.c",
  "south" : DIR+"/rooms/x5y27z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
