inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 47, 9 }));
  set_short( "Hallway - x23y47z9" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y48z9.c",
  "south" : DIR+"/rooms/x23y46z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
