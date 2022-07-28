inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 56, 9 }));
  set_short( "Passage - x19y56z9" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y56z9.c",
  "south" : DIR+"/rooms/x19y55z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
