inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 30, 4 }));
  set_short( "Corridor - x41y30z4" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y30z4.c",
  "east" : DIR+"/rooms/x42y30z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
