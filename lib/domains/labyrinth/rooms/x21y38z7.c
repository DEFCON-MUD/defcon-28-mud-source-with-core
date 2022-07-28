inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 38, 7 }));
  set_short( "Corridor - x21y38z7" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y38z7.c",
  "south" : DIR+"/rooms/x21y37z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
