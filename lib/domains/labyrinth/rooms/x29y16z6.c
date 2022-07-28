inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 16, 6 }));
  set_short( "Corridor - x29y16z6" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y16z6.c",
  "north" : DIR+"/rooms/x29y17z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
