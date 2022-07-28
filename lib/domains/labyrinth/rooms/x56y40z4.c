inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 40, 4 }));
  set_short( "Hallway - x56y40z4" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y40z4.c",
  "east" : DIR+"/rooms/x57y40z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
