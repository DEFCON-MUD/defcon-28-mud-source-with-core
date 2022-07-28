inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 51, 5 }));
  set_short( "Passage - x27y51z5" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y52z5.c",
  "south" : DIR+"/rooms/x27y50z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
