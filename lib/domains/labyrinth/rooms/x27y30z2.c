inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 30, 2 }));
  set_short( "Corridor - x27y30z2" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y30z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
