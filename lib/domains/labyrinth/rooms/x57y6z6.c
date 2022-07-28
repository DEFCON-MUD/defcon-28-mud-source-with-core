inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 6, 6 }));
  set_short( "Hallway - x57y6z6" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y6z6.c",
  "east" : DIR+"/rooms/x58y6z6.c",
  "north" : DIR+"/rooms/x57y7z6.c",
  "south" : DIR+"/rooms/x57y5z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
