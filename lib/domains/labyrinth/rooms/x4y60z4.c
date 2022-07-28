inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 60, 4 }));
  set_short( "Hallway - x4y60z4" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y60z4.c",
  "east" : DIR+"/rooms/x5y60z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
