inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 60, 2 }));
  set_short( "Corridor - x54y60z2" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y60z2.c",
  "east" : DIR+"/rooms/x55y60z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
