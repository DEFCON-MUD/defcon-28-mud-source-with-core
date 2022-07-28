inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 57, 6 }));
  set_short( "Corridor - x61y57z6" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y58z6.c",
  "south" : DIR+"/rooms/x61y56z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
