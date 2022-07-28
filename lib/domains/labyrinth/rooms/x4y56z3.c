inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 56, 3 }));
  set_short( "Corridor - x4y56z3" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y56z3.c",
  "east" : DIR+"/rooms/x5y56z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
