inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 11, 2 }));
  set_short( "Corridor - x57y11z2" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y12z2.c",
  "south" : DIR+"/rooms/x57y10z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
