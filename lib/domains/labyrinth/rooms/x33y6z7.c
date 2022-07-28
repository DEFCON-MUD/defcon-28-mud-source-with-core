inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 6, 7 }));
  set_short( "Passage - x33y6z7" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y6z7.c",
  "north" : DIR+"/rooms/x33y7z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
