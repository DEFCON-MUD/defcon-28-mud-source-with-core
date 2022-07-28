inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 60, 4 }));
  set_short( "Corridor - x31y60z4" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y60z4.c",
  "north" : DIR+"/rooms/x31y61z4.c",
  "south" : DIR+"/rooms/x31y59z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
