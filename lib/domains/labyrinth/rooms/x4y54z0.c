inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 54, 0 }));
  set_short( "Passage - x4y54z0" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y54z0.c",
  "east" : DIR+"/rooms/x5y54z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
