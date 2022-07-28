inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 36, 3 }));
  set_short( "Passage - x61y36z3" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y36z3.c",
  "south" : DIR+"/rooms/x61y35z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
