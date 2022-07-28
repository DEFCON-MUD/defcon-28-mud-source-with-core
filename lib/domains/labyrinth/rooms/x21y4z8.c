inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 4, 8 }));
  set_short( "Passage - x21y4z8" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y4z8.c",
  "north" : DIR+"/rooms/x21y5z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
