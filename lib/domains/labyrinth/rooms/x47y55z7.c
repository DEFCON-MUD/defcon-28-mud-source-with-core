inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 55, 7 }));
  set_short( "Corridor - x47y55z7" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y56z7.c",
  "south" : DIR+"/rooms/x47y54z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
