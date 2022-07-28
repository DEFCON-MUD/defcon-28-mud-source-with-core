inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 24, 5 }));
  set_short( "Corridor - x33y24z5" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y25z5.c",
  "south" : DIR+"/rooms/x33y23z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
