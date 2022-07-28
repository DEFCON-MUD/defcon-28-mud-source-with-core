inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 18, 5 }));
  set_short( "Hallway - x17y18z5" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y18z5.c",
  "north" : DIR+"/rooms/x17y19z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
