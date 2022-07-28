inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 50, 6 }));
  set_short( "Corridor - x25y50z6" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y50z6.c",
  "east" : DIR+"/rooms/x26y50z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the radioactive waste in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
