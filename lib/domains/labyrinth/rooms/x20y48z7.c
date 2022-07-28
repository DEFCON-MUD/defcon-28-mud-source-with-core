inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 48, 7 }));
  set_short( "Corridor - x20y48z7" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y48z7.c",
  "east" : DIR+"/rooms/x21y48z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
