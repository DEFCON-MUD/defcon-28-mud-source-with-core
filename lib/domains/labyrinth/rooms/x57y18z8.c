inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 18, 8 }));
  set_short( "Passage - x57y18z8" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y19z8.c",
  "south" : DIR+"/rooms/x57y17z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
