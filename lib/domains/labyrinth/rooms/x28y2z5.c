inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 2, 5 }));
  set_short( "Hallway - x28y2z5" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y2z5.c",
  "east" : DIR+"/rooms/x29y2z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
