inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 46, 9 }));
  set_short( "Passage - x19y46z9" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y46z9.c",
  "north" : DIR+"/rooms/x19y47z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
