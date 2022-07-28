inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 54, 1 }));
  set_short( "Passage - x3y54z1" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y54z1.c",
  "south" : DIR+"/rooms/x3y53z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
