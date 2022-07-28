inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 13, 0 }));
  set_short( "Corridor - x57y13z0" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y14z0.c",
  "south" : DIR+"/rooms/x57y12z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
