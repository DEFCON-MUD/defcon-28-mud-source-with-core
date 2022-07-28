inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 20, 4 }));
  set_short( "Corridor - x1y20z4" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y21z4.c",
  "south" : DIR+"/rooms/x1y19z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
