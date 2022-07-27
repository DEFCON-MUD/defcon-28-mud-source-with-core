inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 32, 0 }));
  set_short( "Passage - x21y32z0" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y32z0.c",
  "north" : DIR+"/rooms/x21y33z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
