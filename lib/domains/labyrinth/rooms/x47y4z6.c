inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 4, 6 }));
  set_short( "Passage - x47y4z6" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y4z6.c",
  "north" : DIR+"/rooms/x47y5z6.c",
  "south" : DIR+"/rooms/x47y3z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
