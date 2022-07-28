inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 20, 1 }));
  set_short( "Passage - x46y20z1" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y20z1.c",
  "east" : DIR+"/rooms/x47y20z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
