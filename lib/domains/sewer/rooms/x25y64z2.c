inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 64, 2 }));
  set_short( "Passage - x25y64z2" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y64z2.c",
  "east" : DIR+"/rooms/x26y64z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
