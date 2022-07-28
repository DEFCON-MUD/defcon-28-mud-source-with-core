inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 48, 6 }));
  set_short( "Hallway - x48y48z6" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y48z6.c",
  "east" : DIR+"/rooms/x49y48z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
