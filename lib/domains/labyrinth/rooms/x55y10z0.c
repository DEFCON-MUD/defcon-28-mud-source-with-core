inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 10, 0 }));
  set_short( "Passage - x55y10z0" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y10z0.c",
  "north" : DIR+"/rooms/x55y11z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
