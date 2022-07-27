inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 27, 8 }));
  set_short( "Passage - x55y27z8" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y28z8.c",
  "south" : DIR+"/rooms/x55y26z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
