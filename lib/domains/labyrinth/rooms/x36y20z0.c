inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 20, 0 }));
  set_short( "Passage - x36y20z0" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y20z0.c",
  "east" : DIR+"/rooms/x37y20z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
