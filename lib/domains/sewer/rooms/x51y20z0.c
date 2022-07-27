inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 20, 0 }));
  set_short( "Hallway - x51y20z0" );
set_objects( DIR+"/monsters/auditor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y20z0.c",
  "south" : DIR+"/rooms/x51y19z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
