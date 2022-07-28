inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 64, 3 }));
  set_short( "Hallway - x11y64z3" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y64z3.c",
  "east" : DIR+"/rooms/x12y64z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
