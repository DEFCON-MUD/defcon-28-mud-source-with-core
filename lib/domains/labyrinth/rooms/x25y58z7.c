inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 58, 7 }));
  set_short( "Passage - x25y58z7" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y58z7.c",
  "north" : DIR+"/rooms/x25y59z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
