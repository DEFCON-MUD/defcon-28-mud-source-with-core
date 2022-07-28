inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 43, 4 }));
  set_short( "Passage - x5y43z4" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y44z4.c",
  "south" : DIR+"/rooms/x5y42z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
