inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 46, 1 }));
  set_short( "Passage - x10y46z1" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y46z1.c",
  "east" : DIR+"/rooms/x11y46z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
