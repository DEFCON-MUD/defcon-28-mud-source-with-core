inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 39, 5 }));
  set_short( "Corridor - x15y39z5" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y40z5.c",
  "south" : DIR+"/rooms/x15y38z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
