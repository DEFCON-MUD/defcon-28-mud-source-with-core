inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 34, 4 }));
  set_short( "Corridor - x22y34z4" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y34z4.c",
  "east" : DIR+"/rooms/x23y34z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
