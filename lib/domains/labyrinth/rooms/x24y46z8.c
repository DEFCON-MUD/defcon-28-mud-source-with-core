inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 46, 8 }));
  set_short( "Corridor - x24y46z8" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y46z8.c",
  "east" : DIR+"/rooms/x25y46z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
