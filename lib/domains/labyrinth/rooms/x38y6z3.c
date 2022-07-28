inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 6, 3 }));
  set_short( "Hallway - x38y6z3" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y6z3.c",
  "east" : DIR+"/rooms/x39y6z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
