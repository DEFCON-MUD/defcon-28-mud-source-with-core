inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 64, 6 }));
  set_short( "Passage - x20y64z6" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y64z6.c",
  "east" : DIR+"/rooms/x21y64z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
