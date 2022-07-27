inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 64, 6 }));
  set_short( "Passage - x45y64z6" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y64z6.c",
  "east" : DIR+"/rooms/x46y64z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
