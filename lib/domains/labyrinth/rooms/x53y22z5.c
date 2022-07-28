inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 22, 5 }));
  set_short( "Hallway - x53y22z5" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y22z5.c",
  "south" : DIR+"/rooms/x53y21z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
