inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 3, 8 }));
  set_short( "Passage - x61y3z8" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y4z8.c",
  "south" : DIR+"/rooms/x61y2z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
