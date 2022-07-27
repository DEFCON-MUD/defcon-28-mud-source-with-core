inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 55, 7 }));
  set_short( "Corridor - x3y55z7" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y56z7.c",
  "south" : DIR+"/rooms/x3y54z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
