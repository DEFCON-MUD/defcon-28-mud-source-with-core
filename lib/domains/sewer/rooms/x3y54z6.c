inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 54, 6 }));
  set_short( "Passage - x3y54z6" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y54z6.c",
  "south" : DIR+"/rooms/x3y53z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
