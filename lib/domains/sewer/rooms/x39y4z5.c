inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 4, 5 }));
  set_short( "Corridor - x39y4z5" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y4z5.c",
  "south" : DIR+"/rooms/x39y3z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
