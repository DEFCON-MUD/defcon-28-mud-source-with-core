inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 20, 8 }));
  set_short( "Hallway - x22y20z8" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y20z8.c",
  "east" : DIR+"/rooms/x23y20z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
