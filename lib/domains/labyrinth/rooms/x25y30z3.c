inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 30, 3 }));
  set_short( "Corridor - x25y30z3" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y30z3.c",
  "east" : DIR+"/rooms/x26y30z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
