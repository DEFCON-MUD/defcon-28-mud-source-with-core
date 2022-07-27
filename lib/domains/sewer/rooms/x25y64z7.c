inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 64, 7 }));
  set_short( "Corridor - x25y64z7" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y64z7.c",
  "east" : DIR+"/rooms/x26y64z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
