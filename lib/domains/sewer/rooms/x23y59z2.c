inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 59, 2 }));
  set_short( "Corridor - x23y59z2" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y60z2.c",
  "south" : DIR+"/rooms/x23y58z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
