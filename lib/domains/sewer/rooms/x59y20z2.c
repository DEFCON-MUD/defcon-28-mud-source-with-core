inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 20, 2 }));
  set_short( "Passage - x59y20z2" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y20z2.c",
  "north" : DIR+"/rooms/x59y21z2.c",
  "south" : DIR+"/rooms/x59y19z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
