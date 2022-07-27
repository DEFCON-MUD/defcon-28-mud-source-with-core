inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 20, 5 }));
  set_short( "Passage - x35y20z5" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y20z5.c",
  "south" : DIR+"/rooms/x35y19z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
