inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 18, 4 }));
  set_short( "Hallway - x37y18z4" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y19z4.c",
  "south" : DIR+"/rooms/x37y17z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
