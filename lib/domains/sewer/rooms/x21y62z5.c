inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 62, 5 }));
  set_short( "Passage - x21y62z5" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y62z5.c",
  "south" : DIR+"/rooms/x21y61z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
