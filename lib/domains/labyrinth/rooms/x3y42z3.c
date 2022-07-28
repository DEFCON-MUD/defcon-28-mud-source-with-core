inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 42, 3 }));
  set_short( "Corridor - x3y42z3" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y42z3.c",
  "south" : DIR+"/rooms/x3y41z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
