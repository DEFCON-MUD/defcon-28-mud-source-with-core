inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 50, 4 }));
  set_short( "Passage - x46y50z4" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y50z4.c",
  "east" : DIR+"/rooms/x47y50z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
