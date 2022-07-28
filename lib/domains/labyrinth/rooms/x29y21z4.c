inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 21, 4 }));
  set_short( "Passage - x29y21z4" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y22z4.c",
  "south" : DIR+"/rooms/x29y20z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
