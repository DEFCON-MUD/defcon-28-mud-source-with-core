inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 48, 9 }));
  set_short( "Hallway - x61y48z9" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y48z9.c",
  "north" : DIR+"/rooms/x61y49z9.c",
  "south" : DIR+"/rooms/x61y47z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
