inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 36, 0 }));
  set_short( "Corridor - x61y36z0" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y37z0.c",
  "south" : DIR+"/rooms/x61y35z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
