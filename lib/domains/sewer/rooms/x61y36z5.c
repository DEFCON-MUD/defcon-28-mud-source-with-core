inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 36, 5 }));
  set_short( "Passage - x61y36z5" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "south" : DIR+"/rooms/x61y35z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
