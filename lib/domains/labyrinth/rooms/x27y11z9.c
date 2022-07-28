inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 11, 9 }));
  set_short( "Hallway - x27y11z9" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y12z9.c",
  "south" : DIR+"/rooms/x27y10z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
