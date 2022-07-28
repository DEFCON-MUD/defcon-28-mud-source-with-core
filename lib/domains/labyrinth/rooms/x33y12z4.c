inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 12, 4 }));
  set_short( "Passage - x33y12z4" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y12z4.c",
  "north" : DIR+"/rooms/x33y13z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
