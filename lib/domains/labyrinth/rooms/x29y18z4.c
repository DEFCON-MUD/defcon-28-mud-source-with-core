inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 18, 4 }));
  set_short( "Passage - x29y18z4" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y18z4.c",
  "north" : DIR+"/rooms/x29y19z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
