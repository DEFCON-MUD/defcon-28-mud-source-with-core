inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 24, 9 }));
  set_short( "Passage - x40y24z9" );
set_objects( DIR+"/monsters/clubbouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y24z9.c",
  "east" : DIR+"/rooms/x41y24z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
