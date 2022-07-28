inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 64, 2 }));
  set_short( "Hallway - x28y64z2" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y64z2.c",
  "east" : DIR+"/rooms/x29y64z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
