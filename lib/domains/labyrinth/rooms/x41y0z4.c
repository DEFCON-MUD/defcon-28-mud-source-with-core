inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 0, 4 }));
  set_short( "Passage - x41y0z4" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y0z4.c",
  "east" : DIR+"/rooms/x42y0z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
