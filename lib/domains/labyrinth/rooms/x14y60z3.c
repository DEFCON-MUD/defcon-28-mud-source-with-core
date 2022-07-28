inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 60, 3 }));
  set_short( "Passage - x14y60z3" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y60z3.c",
  "east" : DIR+"/rooms/x15y60z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
