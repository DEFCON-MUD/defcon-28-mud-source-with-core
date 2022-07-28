inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 6, 4 }));
  set_short( "Corridor - x37y6z4" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y6z4.c",
  "east" : DIR+"/rooms/x38y6z4.c",
  "north" : DIR+"/rooms/x37y7z4.c",
  "south" : DIR+"/rooms/x37y5z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
