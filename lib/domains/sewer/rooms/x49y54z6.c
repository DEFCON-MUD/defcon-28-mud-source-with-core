inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 54, 6 }));
  set_short( "Hallway - x49y54z6" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y54z6.c",
  "south" : DIR+"/rooms/x49y53z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
