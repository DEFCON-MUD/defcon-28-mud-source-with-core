inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 2, 1 }));
  set_short( "Corridor - x56y2z1" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y2z1.c",
  "east" : DIR+"/rooms/x57y2z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
