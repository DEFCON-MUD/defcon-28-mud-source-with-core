inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 60, 3 }));
  set_short( "Passage - x5y60z3" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y60z3.c",
  "east" : DIR+"/rooms/x6y60z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
