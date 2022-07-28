inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 40, 9 }));
  set_short( "Passage - x32y40z9" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y40z9.c",
  "east" : DIR+"/rooms/x33y40z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
