inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 20, 3 }));
  set_short( "Passage - x19y20z3" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y20z3.c",
  "north" : DIR+"/rooms/x19y21z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
