inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 24, 6 }));
  set_short( "Hallway - x26y24z6" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y24z6.c",
  "east" : DIR+"/rooms/x27y24z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
