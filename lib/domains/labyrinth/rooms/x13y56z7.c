inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 56, 7 }));
  set_short( "Corridor - x13y56z7" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y56z7.c",
  "south" : DIR+"/rooms/x13y55z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
