inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 64, 3 }));
  set_short( "Hallway - x9y64z3" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y64z3.c",
  "east" : DIR+"/rooms/x10y64z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
