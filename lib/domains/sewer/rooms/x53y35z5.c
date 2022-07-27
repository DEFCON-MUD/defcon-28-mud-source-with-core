inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 35, 5 }));
  set_short( "Passage - x53y35z5" );
set_objects( DIR+"/monsters/clubbouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y36z5.c",
  "south" : DIR+"/rooms/x53y34z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
