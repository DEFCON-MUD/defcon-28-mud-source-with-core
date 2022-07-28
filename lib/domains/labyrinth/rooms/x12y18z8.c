inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 18, 8 }));
  set_short( "Hallway - x12y18z8" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y18z8.c",
  "east" : DIR+"/rooms/x13y18z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
