inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 40, 9 }));
  set_short( "Passage - x61y40z9" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y41z9.c",
  "south" : DIR+"/rooms/x61y39z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
