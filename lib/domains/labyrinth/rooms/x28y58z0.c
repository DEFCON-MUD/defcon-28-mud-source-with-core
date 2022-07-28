inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 58, 0 }));
  set_short( "Passage - x28y58z0" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y58z0.c",
  "east" : DIR+"/rooms/x29y58z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
