inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 22, 2 }));
  set_short( "Corridor - x17y22z2" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y22z2.c",
  "south" : DIR+"/rooms/x17y21z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
