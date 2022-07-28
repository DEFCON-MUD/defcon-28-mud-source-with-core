inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 54, 6 }));
  set_short( "Hallway - x51y54z6" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y54z6.c",
  "east" : DIR+"/rooms/x52y54z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
