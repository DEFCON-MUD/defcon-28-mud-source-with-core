inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 2, 9 }));
  set_short( "Hallway - x38y2z9" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y2z9.c",
  "east" : DIR+"/rooms/x39y2z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
