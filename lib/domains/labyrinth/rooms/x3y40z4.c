inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 40, 4 }));
  set_short( "Passage - x3y40z4" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y40z4.c",
  "north" : DIR+"/rooms/x3y41z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
