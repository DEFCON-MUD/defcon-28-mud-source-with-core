inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 24, 8 }));
  set_short( "Corridor - x47y24z8" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y24z8.c",
  "east" : DIR+"/rooms/x48y24z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
