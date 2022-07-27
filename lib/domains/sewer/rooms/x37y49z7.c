inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 49, 7 }));
  set_short( "Passage - x37y49z7" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y50z7.c",
  "south" : DIR+"/rooms/x37y48z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
