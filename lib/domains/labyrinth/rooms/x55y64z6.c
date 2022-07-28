inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 64, 6 }));
  set_short( "Hallway - x55y64z6" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y64z6.c",
  "east" : DIR+"/rooms/x56y64z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the radioactive waste in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
