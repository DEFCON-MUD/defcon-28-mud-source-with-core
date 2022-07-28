inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 16, 8 }));
  set_short( "Passage - x17y16z8" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y16z8.c",
  "north" : DIR+"/rooms/x17y17z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
