inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 10, 1 }));
  set_short( "Hallway - x46y10z1" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y10z1.c",
  "east" : DIR+"/rooms/x47y10z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
