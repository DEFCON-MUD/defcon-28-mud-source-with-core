inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 9, 9 }));
  set_short( "Corridor - x59y9z9" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y10z9.c",
  "south" : DIR+"/rooms/x59y8z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
