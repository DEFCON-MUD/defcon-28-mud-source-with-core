inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 21, 7 }));
  set_short( "Passage - x13y21z7" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y22z7.c",
  "south" : DIR+"/rooms/x13y20z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
