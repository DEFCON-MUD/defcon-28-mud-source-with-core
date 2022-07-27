inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 6, 3 }));
  set_short( "Passage - x55y6z3" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y6z3.c",
  "east" : DIR+"/rooms/x56y6z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
