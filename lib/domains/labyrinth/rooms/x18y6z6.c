inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 6, 6 }));
  set_short( "Hallway - x18y6z6" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y6z6.c",
  "east" : DIR+"/rooms/x19y6z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
