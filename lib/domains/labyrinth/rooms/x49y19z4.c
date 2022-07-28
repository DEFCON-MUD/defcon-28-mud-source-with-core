inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 19, 4 }));
  set_short( "Corridor - x49y19z4" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y20z4.c",
  "south" : DIR+"/rooms/x49y18z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
