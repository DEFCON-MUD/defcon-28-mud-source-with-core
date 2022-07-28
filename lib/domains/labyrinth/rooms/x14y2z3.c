inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 2, 3 }));
  set_short( "Hallway - x14y2z3" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y2z3.c",
  "east" : DIR+"/rooms/x15y2z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
