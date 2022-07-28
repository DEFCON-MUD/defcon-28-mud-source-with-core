inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 46, 6 }));
  set_short( "Corridor - x21y46z6" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y46z6.c",
  "north" : DIR+"/rooms/x21y47z6.c",
  "south" : DIR+"/rooms/x21y45z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
