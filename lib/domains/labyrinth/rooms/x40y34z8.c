inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 34, 8 }));
  set_short( "Hallway - x40y34z8" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y34z8.c",
  "east" : DIR+"/rooms/x41y34z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
