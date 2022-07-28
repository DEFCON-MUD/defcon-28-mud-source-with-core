inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 60, 3 }));
  set_short( "Passage - x12y60z3" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y60z3.c",
  "east" : DIR+"/rooms/x13y60z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
