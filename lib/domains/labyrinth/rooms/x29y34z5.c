inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 34, 5 }));
  set_short( "Corridor - x29y34z5" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y34z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
