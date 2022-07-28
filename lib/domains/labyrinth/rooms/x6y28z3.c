inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 28, 3 }));
  set_short( "Passage - x6y28z3" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y28z3.c",
  "east" : DIR+"/rooms/x7y28z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
