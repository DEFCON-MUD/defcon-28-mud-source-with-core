inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 29, 0 }));
  set_short( "Corridor - x11y29z0" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y30z0.c",
  "south" : DIR+"/rooms/x11y28z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
