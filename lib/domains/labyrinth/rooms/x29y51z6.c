inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 51, 6 }));
  set_short( "Hallway - x29y51z6" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y52z6.c",
  "south" : DIR+"/rooms/x29y50z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
