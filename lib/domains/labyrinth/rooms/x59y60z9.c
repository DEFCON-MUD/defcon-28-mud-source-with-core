inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 60, 9 }));
  set_short( "Hallway - x59y60z9" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y60z9.c",
  "east" : DIR+"/rooms/x60y60z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
