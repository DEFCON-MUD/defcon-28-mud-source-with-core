inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 64, 2 }));
  set_short( "Corridor - x7y64z2" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y64z2.c",
  "east" : DIR+"/rooms/x8y64z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
