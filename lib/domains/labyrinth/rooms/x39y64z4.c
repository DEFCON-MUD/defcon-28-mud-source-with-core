inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 64, 4 }));
  set_short( "Corridor - x39y64z4" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y64z4.c",
  "east" : DIR+"/rooms/x40y64z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
