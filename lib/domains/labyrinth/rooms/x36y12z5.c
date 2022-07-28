inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 12, 5 }));
  set_short( "Hallway - x36y12z5" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y12z5.c",
  "east" : DIR+"/rooms/x37y12z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
