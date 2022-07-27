inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 28, 4 }));
  set_short( "Passage - x35y28z4" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y28z4.c",
  "north" : DIR+"/rooms/x35y29z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
