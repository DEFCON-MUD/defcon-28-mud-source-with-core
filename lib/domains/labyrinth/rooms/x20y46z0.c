inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 46, 0 }));
  set_short( "Corridor - x20y46z0" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y46z0.c",
  "east" : DIR+"/rooms/x21y46z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
