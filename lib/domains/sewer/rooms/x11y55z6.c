inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 55, 6 }));
  set_short( "Corridor - x11y55z6" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y56z6.c",
  "south" : DIR+"/rooms/x11y54z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
