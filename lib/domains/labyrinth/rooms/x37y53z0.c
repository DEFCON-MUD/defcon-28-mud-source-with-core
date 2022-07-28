inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 53, 0 }));
  set_short( "Hallway - x37y53z0" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y54z0.c",
  "south" : DIR+"/rooms/x37y52z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
