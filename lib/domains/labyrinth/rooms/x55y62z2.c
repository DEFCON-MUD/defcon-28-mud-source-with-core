inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 62, 2 }));
  set_short( "Corridor - x55y62z2" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y62z2.c",
  "east" : DIR+"/rooms/x56y62z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
