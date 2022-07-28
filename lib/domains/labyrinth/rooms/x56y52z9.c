inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 52, 9 }));
  set_short( "Corridor - x56y52z9" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y52z9.c",
  "east" : DIR+"/rooms/x57y52z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
