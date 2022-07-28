inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 22, 4 }));
  set_short( "Corridor - x51y22z4" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y22z4.c",
  "north" : DIR+"/rooms/x51y23z4.c",
  "south" : DIR+"/rooms/x51y21z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
