inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 46, 9 }));
  set_short( "Corridor - x1y46z9" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y46z9.c",
  "south" : DIR+"/rooms/x1y45z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the radioactive waste in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
