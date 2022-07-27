inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 36, 9 }));
  set_short( "Corridor - x4y36z9" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y36z9.c",
  "east" : DIR+"/rooms/x5y36z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
