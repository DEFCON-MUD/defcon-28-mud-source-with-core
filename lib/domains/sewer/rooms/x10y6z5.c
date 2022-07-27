inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 6, 5 }));
  set_short( "Passage - x10y6z5" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y6z5.c",
  "east" : DIR+"/rooms/x11y6z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
