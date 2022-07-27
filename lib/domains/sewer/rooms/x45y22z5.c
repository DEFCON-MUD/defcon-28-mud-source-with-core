inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 22, 5 }));
  set_short( "Hallway - x45y22z5" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y22z5.c",
  "south" : DIR+"/rooms/x45y21z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
