inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 48, 1 }));
  set_short( "Hallway - x41y48z1" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y48z1.c",
  "north" : DIR+"/rooms/x41y49z1.c",
  "south" : DIR+"/rooms/x41y47z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
