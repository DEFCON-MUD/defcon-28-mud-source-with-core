inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 19, 9 }));
  set_short( "Hallway - x19y19z9" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y20z9.c",
  "south" : DIR+"/rooms/x19y18z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
