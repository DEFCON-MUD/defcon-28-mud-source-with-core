inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 58, 5 }));
  set_short( "Corridor - x21y58z5" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y59z5.c",
  "south" : DIR+"/rooms/x21y57z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
