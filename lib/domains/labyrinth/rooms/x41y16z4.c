inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 16, 4 }));
  set_short( "Corridor - x41y16z4" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y16z4.c",
  "east" : DIR+"/rooms/x42y16z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
