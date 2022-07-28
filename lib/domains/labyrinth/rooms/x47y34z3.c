inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 34, 3 }));
  set_short( "Passage - x47y34z3" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y34z3.c",
  "south" : DIR+"/rooms/x47y33z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
