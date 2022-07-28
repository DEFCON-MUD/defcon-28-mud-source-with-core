inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 42, 5 }));
  set_short( "Corridor - x24y42z5" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y42z5.c",
  "east" : DIR+"/rooms/x25y42z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
