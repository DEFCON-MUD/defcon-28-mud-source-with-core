inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 18, 9 }));
  set_short( "Hallway - x49y18z9" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y18z9.c",
  "south" : DIR+"/rooms/x49y17z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
