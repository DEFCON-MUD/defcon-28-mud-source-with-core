inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 46, 3 }));
  set_short( "Corridor - x2y46z3" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y46z3.c",
  "east" : DIR+"/rooms/x3y46z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
