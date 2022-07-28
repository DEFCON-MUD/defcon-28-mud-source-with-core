inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 34, 3 }));
  set_short( "Passage - x37y34z3" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y35z3.c",
  "south" : DIR+"/rooms/x37y33z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
