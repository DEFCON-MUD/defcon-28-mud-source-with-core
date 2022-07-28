inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 18, 2 }));
  set_short( "Corridor - x1y18z2" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "south" : DIR+"/rooms/x1y17z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
