inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 42, 8 }));
  set_short( "Hallway - x39y42z8" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y42z8.c",
  "north" : DIR+"/rooms/x39y43z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
