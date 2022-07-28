inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 8, 7 }));
  set_short( "Passage - x59y8z7" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y8z7.c",
  "east" : DIR+"/rooms/x60y8z7.c",
  "north" : DIR+"/rooms/x59y9z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
