inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 55, 6 }));
  set_short( "Passage - x17y55z6" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y56z6.c",
  "south" : DIR+"/rooms/x17y54z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crappy sales material in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
