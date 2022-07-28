inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 16, 3 }));
  set_short( "Hallway - x59y16z3" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y16z3.c",
  "north" : DIR+"/rooms/x59y17z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
