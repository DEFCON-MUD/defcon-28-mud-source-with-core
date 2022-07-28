inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 64, 0 }));
  set_short( "Hallway - x36y64z0" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y64z0.c",
  "east" : DIR+"/rooms/x37y64z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
