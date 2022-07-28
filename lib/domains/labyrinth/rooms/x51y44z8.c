inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 44, 8 }));
  set_short( "Corridor - x51y44z8" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y44z8.c",
  "east" : DIR+"/rooms/x52y44z8.c",
  "south" : DIR+"/rooms/x51y43z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
