inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 44, 3 }));
  set_short( "Passage - x46y44z3" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y44z3.c",
  "east" : DIR+"/rooms/x47y44z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
