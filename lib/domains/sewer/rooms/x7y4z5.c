inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 4, 5 }));
  set_short( "Passage - x7y4z5" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y4z5.c",
  "east" : DIR+"/rooms/x8y4z5.c",
  "north" : DIR+"/rooms/x7y5z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
