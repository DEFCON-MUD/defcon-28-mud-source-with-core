inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 0, 4 }));
  set_short( "Corridor - x11y0z4" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y0z4.c",
  "east" : DIR+"/rooms/x12y0z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
