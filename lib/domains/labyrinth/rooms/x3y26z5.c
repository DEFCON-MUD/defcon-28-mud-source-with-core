inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 26, 5 }));
  set_short( "Corridor - x3y26z5" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y26z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
