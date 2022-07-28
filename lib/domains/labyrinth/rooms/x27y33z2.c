inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 33, 2 }));
  set_short( "Corridor - x27y33z2" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y34z2.c",
  "south" : DIR+"/rooms/x27y32z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
