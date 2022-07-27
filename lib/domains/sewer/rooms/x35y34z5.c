inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 34, 5 }));
  set_short( "Corridor - x35y34z5" );
set_objects( DIR+"/monsters/clubbouer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y34z5.c",
  "south" : DIR+"/rooms/x35y33z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
