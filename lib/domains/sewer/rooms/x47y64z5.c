inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 64, 5 }));
  set_short( "Passage - x47y64z5" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y64z5.c",
  "east" : DIR+"/rooms/x48y64z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
