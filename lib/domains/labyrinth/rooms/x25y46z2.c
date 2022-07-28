inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 46, 2 }));
  set_short( "Hallway - x25y46z2" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y46z2.c",
  "north" : DIR+"/rooms/x25y47z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
