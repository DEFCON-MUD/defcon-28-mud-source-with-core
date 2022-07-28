inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 10, 7 }));
  set_short( "Corridor - x9y10z7" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y10z7.c",
  "east" : DIR+"/rooms/x10y10z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
