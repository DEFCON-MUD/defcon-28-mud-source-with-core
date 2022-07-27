inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 38, 2 }));
  set_short( "Corridor - x29y38z2" );
set_objects( DIR+"/monsters/bugsy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y38z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east.%^RESET%^");
}
