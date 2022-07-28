inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 33, 1 }));
  set_short( "Passage - x1y33z1" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y34z1.c",
  "south" : DIR+"/rooms/x1y32z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
