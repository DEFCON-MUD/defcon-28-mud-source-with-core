inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 13, 4 }));
  set_short( "Passage - x45y13z4" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y14z4.c",
  "south" : DIR+"/rooms/x45y12z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
