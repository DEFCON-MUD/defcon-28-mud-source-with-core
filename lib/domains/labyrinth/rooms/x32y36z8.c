inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 36, 8 }));
  set_short( "Passage - x32y36z8" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y36z8.c",
  "east" : DIR+"/rooms/x33y36z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
