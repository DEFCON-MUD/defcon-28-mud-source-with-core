inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 12, 9 }));
  set_short( "Hallway - x50y12z9" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y12z9.c",
  "east" : DIR+"/rooms/x51y12z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
