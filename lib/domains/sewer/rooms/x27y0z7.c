inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 0, 7 }));
  set_short( "Corridor - x27y0z7" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y0z7.c",
  "east" : DIR+"/rooms/x28y0z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
