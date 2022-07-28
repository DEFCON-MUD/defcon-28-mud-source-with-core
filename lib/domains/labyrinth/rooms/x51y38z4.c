inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 38, 4 }));
  set_short( "Hallway - x51y38z4" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y39z4.c",
  "south" : DIR+"/rooms/x51y37z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
