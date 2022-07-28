inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 14, 2 }));
  set_short( "Passage - x40y14z2" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y14z2.c",
  "east" : DIR+"/rooms/x41y14z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
