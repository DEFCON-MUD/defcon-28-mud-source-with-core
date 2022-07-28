inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 60, 8 }));
  set_short( "Corridor - x31y60z8" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y60z8.c",
  "north" : DIR+"/rooms/x31y61z8.c",
  "south" : DIR+"/rooms/x31y59z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
