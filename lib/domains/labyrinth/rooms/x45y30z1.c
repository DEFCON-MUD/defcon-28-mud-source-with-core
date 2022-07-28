inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 30, 1 }));
  set_short( "Passage - x45y30z1" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y30z1.c",
  "north" : DIR+"/rooms/x45y31z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
