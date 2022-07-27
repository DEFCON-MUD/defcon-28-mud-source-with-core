inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 58, 1 }));
  set_short( "Passage - x47y58z1" );
set_objects( DIR+"/monsters/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y58z1.c",
  "east" : DIR+"/rooms/x48y58z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
