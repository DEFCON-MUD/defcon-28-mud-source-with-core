inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 37, 6 }));
  set_short( "Corridor - x45y37z6" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y38z6.c",
  "south" : DIR+"/rooms/x45y36z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
