inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 8, 6 }));
  set_short( "Corridor - x3y8z6" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y8z6.c",
  "south" : DIR+"/rooms/x3y7z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
