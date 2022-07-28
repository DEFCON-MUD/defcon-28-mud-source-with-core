inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 58, 3 }));
  set_short( "Corridor - x31y58z3" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y58z3.c",
  "east" : DIR+"/rooms/x32y58z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
