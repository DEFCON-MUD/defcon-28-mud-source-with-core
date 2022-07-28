inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 30, 4 }));
  set_short( "Hallway - x42y30z4" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y30z4.c",
  "east" : DIR+"/rooms/x43y30z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
