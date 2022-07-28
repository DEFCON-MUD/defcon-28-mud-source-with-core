inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 41, 5 }));
  set_short( "Passage - x7y41z5" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y42z5.c",
  "south" : DIR+"/rooms/x7y40z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
