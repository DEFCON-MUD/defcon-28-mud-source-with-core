inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 37, 5 }));
  set_short( "Corridor - x5y37z5" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y38z5.c",
  "south" : DIR+"/rooms/x5y36z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
