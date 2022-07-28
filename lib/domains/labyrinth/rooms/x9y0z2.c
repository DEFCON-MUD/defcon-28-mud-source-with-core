inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 0, 2 }));
  set_short( "Hallway - x9y0z2" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y0z2.c",
  "east" : DIR+"/rooms/x10y0z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
