inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 2, 3 }));
  set_short( "Hallway - x55y2z3" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y2z3.c",
  "east" : DIR+"/rooms/x56y2z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
