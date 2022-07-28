inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 46, 6 }));
  set_short( "Corridor - x52y46z6" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y46z6.c",
  "east" : DIR+"/rooms/x53y46z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
