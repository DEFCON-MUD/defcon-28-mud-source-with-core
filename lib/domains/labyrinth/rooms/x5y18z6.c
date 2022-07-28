inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 18, 6 }));
  set_short( "Hallway - x5y18z6" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y18z6.c",
  "north" : DIR+"/rooms/x5y19z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
