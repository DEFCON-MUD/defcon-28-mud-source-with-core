inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 52, 7 }));
  set_short( "Hallway - x53y52z7" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y52z7.c",
  "east" : DIR+"/rooms/x54y52z7.c",
  "north" : DIR+"/rooms/x53y53z7.c",
  "south" : DIR+"/rooms/x53y51z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
