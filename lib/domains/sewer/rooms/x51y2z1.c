inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 2, 1 }));
  set_short( "Passage - x51y2z1" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y2z1.c",
  "east" : DIR+"/rooms/x52y2z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
