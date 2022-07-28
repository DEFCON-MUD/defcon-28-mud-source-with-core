inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 14, 3 }));
  set_short( "Corridor - x10y14z3" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y14z3.c",
  "east" : DIR+"/rooms/x11y14z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
