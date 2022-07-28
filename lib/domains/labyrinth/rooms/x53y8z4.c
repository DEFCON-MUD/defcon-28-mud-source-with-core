inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 8, 4 }));
  set_short( "Corridor - x53y8z4" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y8z4.c",
  "east" : DIR+"/rooms/x54y8z4.c",
  "north" : DIR+"/rooms/x53y9z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
