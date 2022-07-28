inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 41, 4 }));
  set_short( "Hallway - x61y41z4" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y42z4.c",
  "south" : DIR+"/rooms/x61y40z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
