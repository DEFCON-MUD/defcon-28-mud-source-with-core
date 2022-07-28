inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 7, 4 }));
  set_short( "Corridor - x61y7z4" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y8z4.c",
  "south" : DIR+"/rooms/x61y6z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
