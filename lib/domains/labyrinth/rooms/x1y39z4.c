inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 39, 4 }));
  set_short( "Passage - x1y39z4" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y40z4.c",
  "south" : DIR+"/rooms/x1y38z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
