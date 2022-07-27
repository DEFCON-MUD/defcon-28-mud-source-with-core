inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 7, 4 }));
  set_short( "Hallway - x11y7z4" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y8z4.c",
  "south" : DIR+"/rooms/x11y6z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
