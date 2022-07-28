inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 10, 0 }));
  set_short( "Corridor - x39y10z0" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y10z0.c",
  "east" : DIR+"/rooms/x40y10z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
