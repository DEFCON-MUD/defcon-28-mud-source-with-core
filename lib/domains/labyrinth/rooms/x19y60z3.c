inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 60, 3 }));
  set_short( "Passage - x19y60z3" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y61z3.c",
  "south" : DIR+"/rooms/x19y59z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
