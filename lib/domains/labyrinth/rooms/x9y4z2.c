inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 4, 2 }));
  set_short( "Corridor - x9y4z2" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y4z2.c",
  "north" : DIR+"/rooms/x9y5z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
