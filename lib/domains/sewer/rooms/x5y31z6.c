inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 31, 6 }));
  set_short( "Passage - x5y31z6" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y32z6.c",
  "south" : DIR+"/rooms/x5y30z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
