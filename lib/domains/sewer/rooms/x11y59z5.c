inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 59, 5 }));
  set_short( "Passage - x11y59z5" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y60z5.c",
  "south" : DIR+"/rooms/x11y58z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
