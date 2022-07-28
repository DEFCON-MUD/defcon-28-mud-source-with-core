inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 33, 3 }));
  set_short( "Passage - x47y33z3" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y34z3.c",
  "south" : DIR+"/rooms/x47y32z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
