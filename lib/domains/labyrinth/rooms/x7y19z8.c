inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 19, 8 }));
  set_short( "Hallway - x7y19z8" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y20z8.c",
  "south" : DIR+"/rooms/x7y18z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
