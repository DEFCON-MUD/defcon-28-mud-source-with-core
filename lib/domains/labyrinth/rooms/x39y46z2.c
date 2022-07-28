inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 46, 2 }));
  set_short( "Hallway - x39y46z2" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "south" : DIR+"/rooms/x39y45z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
