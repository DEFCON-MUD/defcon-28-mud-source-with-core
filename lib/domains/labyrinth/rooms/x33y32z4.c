inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 32, 4 }));
  set_short( "Passage - x33y32z4" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y32z4.c",
  "east" : DIR+"/rooms/x34y32z4.c",
  "north" : DIR+"/rooms/x33y33z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
