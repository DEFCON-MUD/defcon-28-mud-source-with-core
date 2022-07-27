inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 60, 5 }));
  set_short( "Passage - x35y60z5" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y60z5.c",
  "south" : DIR+"/rooms/x35y59z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
