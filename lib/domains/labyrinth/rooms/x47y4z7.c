inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 4, 7 }));
  set_short( "Passage - x47y4z7" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y4z7.c",
  "north" : DIR+"/rooms/x47y5z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
