inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 26, 6 }));
  set_short( "Hallway - x37y26z6" );
set_objects( DIR+"/monsters/tom.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y26z6.c",
  "south" : DIR+"/rooms/x37y25z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
