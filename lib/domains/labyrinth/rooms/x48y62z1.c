inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 62, 1 }));
  set_short( "Hallway - x48y62z1" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y62z1.c",
  "east" : DIR+"/rooms/x49y62z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
