inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 8, 8 }));
  set_short( "Corridor - x18y8z8" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y8z8.c",
  "east" : DIR+"/rooms/x19y8z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
