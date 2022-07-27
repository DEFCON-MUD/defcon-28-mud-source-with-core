inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 6, 5 }));
  set_short( "Hallway - x27y6z5" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y7z5.c",
  "south" : DIR+"/rooms/x27y5z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
