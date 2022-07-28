inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 39, 4 }));
  set_short( "Corridor - x41y39z4" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y40z4.c",
  "south" : DIR+"/rooms/x41y38z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
