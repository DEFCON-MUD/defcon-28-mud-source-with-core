inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 10, 1 }));
  set_short( "Hallway - x46y10z1" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y10z1.c",
  "east" : DIR+"/rooms/x47y10z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
