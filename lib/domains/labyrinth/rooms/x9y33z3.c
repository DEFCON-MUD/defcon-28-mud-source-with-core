inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 33, 3 }));
  set_short( "Corridor - x9y33z3" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y34z3.c",
  "south" : DIR+"/rooms/x9y32z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
