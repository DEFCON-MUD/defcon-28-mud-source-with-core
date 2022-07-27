inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 54, 7 }));
  set_short( "Passage - x33y54z7" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y54z7.c",
  "south" : DIR+"/rooms/x33y53z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
