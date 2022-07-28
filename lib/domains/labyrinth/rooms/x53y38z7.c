inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 38, 7 }));
  set_short( "Passage - x53y38z7" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y38z7.c",
  "east" : DIR+"/rooms/x54y38z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
