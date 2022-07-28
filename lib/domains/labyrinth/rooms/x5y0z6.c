inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 0, 6 }));
  set_short( "Corridor - x5y0z6" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y0z6.c",
  "east" : DIR+"/rooms/x6y0z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
