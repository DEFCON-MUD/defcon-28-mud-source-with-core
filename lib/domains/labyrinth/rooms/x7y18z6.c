inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 18, 6 }));
  set_short( "Passage - x7y18z6" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y18z6.c",
  "north" : DIR+"/rooms/x7y19z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
