inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 24, 1 }));
  set_short( "Corridor - x27y24z1" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y24z1.c",
  "east" : DIR+"/rooms/x28y24z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
