inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 11, 9 }));
  set_short( "Corridor - x11y11z9" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y12z9.c",
  "south" : DIR+"/rooms/x11y10z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
