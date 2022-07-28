inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 31, 3 }));
  set_short( "Hallway - x11y31z3" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y32z3.c",
  "south" : DIR+"/rooms/x11y30z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
