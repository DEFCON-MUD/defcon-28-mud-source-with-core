inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 10, 4 }));
  set_short( "Corridor - x31y10z4" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y10z4.c",
  "north" : DIR+"/rooms/x31y11z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
