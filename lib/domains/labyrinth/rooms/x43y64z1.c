inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 64, 1 }));
  set_short( "Corridor - x43y64z1" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y64z1.c",
  "east" : DIR+"/rooms/x44y64z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
