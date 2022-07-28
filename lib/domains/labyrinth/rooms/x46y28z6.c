inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 28, 6 }));
  set_short( "Corridor - x46y28z6" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y28z6.c",
  "east" : DIR+"/rooms/x47y28z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
