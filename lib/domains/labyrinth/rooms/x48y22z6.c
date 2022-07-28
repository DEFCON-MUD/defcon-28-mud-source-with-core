inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 22, 6 }));
  set_short( "Hallway - x48y22z6" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y22z6.c",
  "east" : DIR+"/rooms/x49y22z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
