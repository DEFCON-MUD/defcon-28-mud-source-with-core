inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 38, 7 }));
  set_short( "Passage - x5y38z7" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y38z7.c",
  "north" : DIR+"/rooms/x5y39z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
