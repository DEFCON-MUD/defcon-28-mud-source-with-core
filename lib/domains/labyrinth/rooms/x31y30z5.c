inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 30, 5 }));
  set_short( "Passage - x31y30z5" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y30z5.c",
  "south" : DIR+"/rooms/x31y29z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
