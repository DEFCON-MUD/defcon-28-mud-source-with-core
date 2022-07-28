inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 0, 1 }));
  set_short( "Corridor - x38y0z1" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y0z1.c",
  "east" : DIR+"/rooms/x39y0z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
