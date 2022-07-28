inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 35, 5 }));
  set_short( "Passage - x1y35z5" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y36z5.c",
  "south" : DIR+"/rooms/x1y34z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
