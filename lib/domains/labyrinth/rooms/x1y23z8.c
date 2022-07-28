inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 23, 8 }));
  set_short( "Corridor - x1y23z8" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y24z8.c",
  "south" : DIR+"/rooms/x1y22z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
