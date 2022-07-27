inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 6, 9 }));
  set_short( "Passage - x9y6z9" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y7z9.c",
  "south" : DIR+"/rooms/x9y5z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
