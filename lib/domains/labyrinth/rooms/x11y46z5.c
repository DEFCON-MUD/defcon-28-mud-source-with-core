inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 46, 5 }));
  set_short( "Hallway - x11y46z5" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y46z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
