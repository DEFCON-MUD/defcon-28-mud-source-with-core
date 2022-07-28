inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 46, 7 }));
  set_short( "Corridor - x37y46z7" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y46z7.c",
  "north" : DIR+"/rooms/x37y47z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
