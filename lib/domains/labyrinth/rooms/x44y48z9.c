inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 48, 9 }));
  set_short( "Hallway - x44y48z9" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y48z9.c",
  "east" : DIR+"/rooms/x45y48z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
