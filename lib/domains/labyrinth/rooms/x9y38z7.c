inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 38, 7 }));
  set_short( "Passage - x9y38z7" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y39z7.c",
  "south" : DIR+"/rooms/x9y37z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
