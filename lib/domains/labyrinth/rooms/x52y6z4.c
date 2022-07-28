inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 6, 4 }));
  set_short( "Hallway - x52y6z4" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y6z4.c",
  "east" : DIR+"/rooms/x53y6z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
