inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 18, 6 }));
  set_short( "Corridor - x8y18z6" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y18z6.c",
  "east" : DIR+"/rooms/x9y18z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
