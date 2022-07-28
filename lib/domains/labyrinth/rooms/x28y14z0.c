inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 14, 0 }));
  set_short( "Corridor - x28y14z0" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y14z0.c",
  "east" : DIR+"/rooms/x29y14z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
