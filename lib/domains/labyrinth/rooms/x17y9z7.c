inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 9, 7 }));
  set_short( "Passage - x17y9z7" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y10z7.c",
  "south" : DIR+"/rooms/x17y8z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
