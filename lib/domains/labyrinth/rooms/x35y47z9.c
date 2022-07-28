inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 47, 9 }));
  set_short( "Passage - x35y47z9" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y48z9.c",
  "south" : DIR+"/rooms/x35y46z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
