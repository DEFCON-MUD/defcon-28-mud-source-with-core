inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 46, 5 }));
  set_short( "Hallway - x51y46z5" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y46z5.c",
  "north" : DIR+"/rooms/x51y47z5.c",
  "south" : DIR+"/rooms/x51y45z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
