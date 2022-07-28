inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 6, 3 }));
  set_short( "Hallway - x36y6z3" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y6z3.c",
  "east" : DIR+"/rooms/x37y6z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
