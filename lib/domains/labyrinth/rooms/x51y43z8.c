inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 43, 8 }));
  set_short( "Hallway - x51y43z8" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y44z8.c",
  "south" : DIR+"/rooms/x51y42z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
