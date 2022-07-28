inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 10, 9 }));
  set_short( "Passage - x4y10z9" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y10z9.c",
  "east" : DIR+"/rooms/x5y10z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
