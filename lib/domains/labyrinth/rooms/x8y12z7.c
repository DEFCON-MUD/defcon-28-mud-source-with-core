inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 12, 7 }));
  set_short( "Corridor - x8y12z7" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y12z7.c",
  "east" : DIR+"/rooms/x9y12z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
