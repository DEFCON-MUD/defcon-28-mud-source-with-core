inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 58, 6 }));
  set_short( "Corridor - x26y58z6" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y58z6.c",
  "east" : DIR+"/rooms/x27y58z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
