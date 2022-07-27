inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 26, 2 }));
  set_short( "Passage - x5y26z2" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "south" : DIR+"/rooms/x5y25z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
