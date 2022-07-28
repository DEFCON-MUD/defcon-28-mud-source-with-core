inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 29, 1 }));
  set_short( "Hallway - x17y29z1" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y30z1.c",
  "south" : DIR+"/rooms/x17y28z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the radioactive waste in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
