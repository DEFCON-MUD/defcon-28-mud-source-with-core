inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 54, 9 }));
  set_short( "Passage - x5y54z9" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y55z9.c",
  "south" : DIR+"/rooms/x5y53z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
