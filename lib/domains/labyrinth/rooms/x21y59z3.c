inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 59, 3 }));
  set_short( "Passage - x21y59z3" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y60z3.c",
  "south" : DIR+"/rooms/x21y58z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
