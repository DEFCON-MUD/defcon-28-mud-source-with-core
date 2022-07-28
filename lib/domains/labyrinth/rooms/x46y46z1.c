inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 46, 1 }));
  set_short( "Passage - x46y46z1" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y46z1.c",
  "east" : DIR+"/rooms/x47y46z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
