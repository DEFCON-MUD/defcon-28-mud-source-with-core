inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 2, 9 }));
  set_short( "Hallway - x9y2z9" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y2z9.c",
  "east" : DIR+"/rooms/x10y2z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
