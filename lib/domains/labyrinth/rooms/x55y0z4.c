inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 0, 4 }));
  set_short( "Hallway - x55y0z4" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y0z4.c",
  "east" : DIR+"/rooms/x56y0z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
