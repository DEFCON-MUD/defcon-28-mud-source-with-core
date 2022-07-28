inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 30, 0 }));
  set_short( "Corridor - x34y30z0" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y30z0.c",
  "east" : DIR+"/rooms/x35y30z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
