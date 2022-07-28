inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 19, 8 }));
  set_short( "Corridor - x29y19z8" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y20z8.c",
  "south" : DIR+"/rooms/x29y18z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
