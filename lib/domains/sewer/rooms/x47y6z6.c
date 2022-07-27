inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 6, 6 }));
  set_short( "Passage - x47y6z6" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y6z6.c",
  "south" : DIR+"/rooms/x47y5z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
