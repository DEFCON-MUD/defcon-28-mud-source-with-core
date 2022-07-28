inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 49, 8 }));
  set_short( "Hallway - x59y49z8" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y50z8.c",
  "south" : DIR+"/rooms/x59y48z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
