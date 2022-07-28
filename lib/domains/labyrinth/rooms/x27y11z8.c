inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 11, 8 }));
  set_short( "Hallway - x27y11z8" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y12z8.c",
  "south" : DIR+"/rooms/x27y10z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
